#include <iostream>
#include <vector>
#include <random>
#include <fstream>
#include <string>
#include <iterator>



int main()
{
    std::random_device rand;
    std::default_random_engine eng(rand());
    std::uniform_int_distribution<int> distr(-1000, 1000);

    std::vector<int> v;
    v.reserve(50);
    size_t howMany = 50;

    for (size_t i = 0; i < howMany; ++i)
    {
        v.push_back(distr(eng));
    }

    for (auto i = v.begin(); i < v.end(); ++i)
    {
        std::cout << *i << std::endl;
    }

    std::cout << std::endl << std::endl;

    std::string fileName("C:\\Users\\Weronika Słowińska\\OneDrive\\Desktop\\CPP\\Zaawansowany\\ZadWektor1000liczb\\wektor.txt");
    std::ofstream fileToWrite(fileName, std::ios::out | std::ios::trunc);

    if (fileToWrite.is_open())
    {
        for (auto it = v.begin(); it < v.end(); ++it)
        {
            if (fileToWrite.good())
            {
                fileToWrite << *it << "\n";
            }
        }
        fileToWrite.close();
    }
    else
    {
        std::cout << "Nie mogę otworzyć pliku do zapisu";
        return -1;
    }

    std::vector<std::string> newVector;
    newVector.reserve(50);

    std::string fileName2("wektor.txt");
    std::ifstream fileToVec(fileName2);

    if (fileToVec.is_open())
    {
        std::cout << "Hurra wczytałem plik " << fileName << std::endl << std::endl;
    }
    else
    {
        std::cout << "Nie mogę otworzyć pliku :(";
        return -1;
    }

    while (fileToVec.good() && !fileToVec.eof())
    {
        std::string str = {};
        std::getline(fileToVec, str);
        newVector.push_back(str);
    }

    fileToVec.close();

    for (auto n : newVector)
    {
        std::cout << n << "\n";
    }

}
