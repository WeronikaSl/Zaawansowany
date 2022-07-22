#include <iostream>
#include "SmartPtr.hpp"

int main()
{
    int* x = new int(7);
    SmartPointer<int> ptr(x);
    {
        SmartPointer<int> ptr2(x);
        std::cout << "Wartosc pod wskaznikiem: " << *ptr;
        std::cout << "Wartosc pod wskaznikiem: " << *ptr2;
    }

    std::cout << "Wartosc pod wskaznikiem: " << *ptr;
}
