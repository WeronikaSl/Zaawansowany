#include <iostream>
#include <exception>


template <typename T, unsigned int N>
class StaticTable
{
private:
    T arr[N] = {};
public:
	T& operator[](const unsigned int i)
	{
        if (i >= N)
        {
            throw std::out_of_range("Tablica jest za mała");
        }
        else 
        {
            return arr[i];
        }
	}

    template<typename T2>
    void print(T2 separator)
    {
        for (int i = 0; i < N; ++i)
        {
            std::cout << arr[i] << separator; // co zrobić żeby tu nie było na końcu tego znaku?
        }
    }

};

template<unsigned int N>
class StaticTable<bool, N>
{
private:
    bool arr[N];

public:
    bool& operator[](const unsigned int i)
    {
        if (i >= N)
        {
            throw std::out_of_range("Tablica jest za mała");
        }
        else
        {
            return arr[i];
        }
    }

};


int main()
{
    StaticTable<int, 10> table1;

    try 
    {
        for (int i = 0; i < 10; ++i)
        {
            table1[i] = i;
        }

        //for (int i = 0; i < 10; ++i)
        //{
        //    std::cout << "tab[" << i << "]=" << table1[i] << std::endl;
        //}
    }
    catch (const std::out_of_range& error)
    {
        std::cout << error.what() << std::endl;
    }

    table1.print('+');

    StaticTable<bool, 2> table2;
    table2[0] = true;
}
