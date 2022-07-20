#include <iostream>
#include "SmartPtr.hpp"

int main()
{
    SmartPointer<int> ptr(new int(7));

    std::cout << "Wartosc pod wskaznikiem: " << *ptr;
}
