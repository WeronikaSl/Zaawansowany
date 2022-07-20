#include <iostream>

template <typename T>
class Math
{
private:
    T _a = 0;
    T _b = 0;
public:
    Math(T a, T b) : _a(a), _b(b)
    {}
    T Addition()
    {
        return _a + _b;
    };
    T Multiplication()
    {
        return _a * _b;
    };
    T Subtraction();
};

int main()
{
    Math<int> obj(4, 5);
    std::cout << obj.Addition() << std::endl;
    std::cout << obj.Multiplication() << std::endl;

    Math<float> obj2(5.5f, 3.2f);
    std::cout << obj2.Addition() << std::endl;
    std::cout << obj2.Multiplication() << std::endl;
}

template<typename T>
T Math<T>::Subtraction()
{
    return _a - _b;
}
