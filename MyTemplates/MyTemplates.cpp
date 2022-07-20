#include <iostream>

//template <typename T>
//void print(T a)
//{
//    std::cout << a << std::endl;
//}
//template<>
//void print(double a)
//{
//    std::cout << a << std::endl;
//}

template<typename T>
T max(T a, T b)
{
    return a > b ? a : b;
}

template <typename T>
T* max(T* a, T* b)
{
    return *a > *b ? a : b;
}

template <>
char* max(char* a, char* b)
{
    if (strcmp(a, b) > 0)
    {
        return a;
    }
    else
    {
        return b;
    }
}

template<typename T>
T max(T* data, const unsigned int n)
{
    T tmpMax = data[0];
    for (int i = 1; i < n; ++i) // zaczynamy od 1 bo już 0 element mamy jako tmpMax
    {
        tmpMax = data[i] > tmpMax ? data[i] : tmpMax;
    }
    return tmpMax;
}

int main()
{
    //print(5);
    //print("HI!");
    //print('a');
    //print(3.4);

    std::cout << max(5, 8) << std::endl;
    std::cout << max("meow", "meo") << std::endl;

    int* a = new int(3);
    int* b = new int(4);
    std::cout << *max(a,b) << std::endl;

    std::cout << max("aaa","aaaa") << std::endl;

    const unsigned int size = 10;
    int tab[size] = { 0, 412, 123, 12, 32, 11, 23, 56, 1, 555 };
    std::cout << "Najwiekszy element w tablicy:" << max(tab, size) << std::endl;

    
    delete a;
    delete b;


}
