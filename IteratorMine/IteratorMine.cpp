#include <iostream>
#include <vector>

int main()
{
    std::vector<int> values = { 1,2,3,4,5 };

    for (std::vector<int>::iterator it = values.begin(); it != values.end(); ++it) //iterator dla wektorów, nazywamy go it i ustawiamy na poerwszy element; wykonuje się dopóki it jest różne od ostatniego elementu; zwiększamy o 1
    {
        std::cout << *it << std::endl; //iterator to taki jakby wskaźnik, więc trzeba wyłuskać spod niego wartość :D
    }

}
