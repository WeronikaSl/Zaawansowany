#include <iostream>

double divide(double a, double b)
{
    if (0 == b)
    {
        throw std::string ("Nie dziel przez 0!");
    }
    return a / b;
}

int main()
{
    int a = 6;
    int b = 0;
    try
    {
        std::cout << divide(a, b) << std::endl;
        
    }
    catch (std::string& error)
    {
        std::cout << error << std::endl;
    }

}
