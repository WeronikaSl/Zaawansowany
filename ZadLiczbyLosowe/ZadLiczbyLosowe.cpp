#include <iostream>
#include <vector>
#include <random>
#include <numeric>



int main()
{
    std::vector<int> v;
    std::random_device r;
    std::default_random_engine defEngine(r());
    std::uniform_int_distribution<int> intDistro(0, 10);
    for (int i = 1; i <= 100; i++)
    {
        v.push_back(intDistro(defEngine));
    }
//pkt a
    std::cout << "Pkt a:" << std::endl;
    for (std::vector<int>::iterator it = v.begin(); it < v.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl << std::endl;
//pkt b
    std::cout << "Pkt b:" << std::endl;

    unsigned int howManyFives = std::count(v.cbegin(), v.cend(), 5);
    std::cout << "Ilość wystąpień lcizby 5: " << howManyFives << std::endl;
    std::cout << std::endl;
//pkt c
    std::cout << "Pkt c:" << std::endl;

    double average = (std::accumulate(v.begin(), v.end(), 0)) / static_cast<double>(v.size());
    std::cout << "Średnia z liczb to: " << average << std::endl;


}
