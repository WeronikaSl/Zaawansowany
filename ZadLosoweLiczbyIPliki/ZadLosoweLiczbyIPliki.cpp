#include <iostream>
#include <random>


int main()
{
    std::random_device ranDev; //ziarno XD
    std::default_random_engine randomEngine(ranDev); //ten silnik generuje, trzeba go zapoczątkować randomową wartoscią, ziarno daje nam to że przy każdym uruchonieniu będzie inaczej wartości
    std::uniform_int_distribution<int> intDist(-10000, 10000); //tutaj rozkład wybieramy, z jakiego przedziału ma losować liczby
    
    //std::vector<int> nums(10000); //generuje 10000 zer
    const size_t howManyNumbers = 10000;
    std::vector<int> nums;
    nums.reserve(10000); //raczej tak robimy, tu nie ma niepotrzebnych alokacji

    for (int i = 0; i < howManyNumbers; ++i)
    {
        nums.push_back(intDist(randomEngine));
    }

}

