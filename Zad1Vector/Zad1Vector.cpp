#include <iostream>
#include <vector>

template<typename T>
void bubbleSort(std::vector<T>& vec)
{
    for (size_t i = 0; i < vec.size() - 1; ++i)
    {
        for (size_t k = 0; k < vec.size() - 1; ++i)
        {
            if (vec.at(k) > vec.at(k + 1))
            {
                std::swap(vec.at(k), vec.at(k + 1));
            }
        }
    }
}

int main()
{
    std::vector<int> arr = {};
    int userInput = 0;
 
    do
    {
        std::cout << "Podaj liczbę:";
        std::cin >> userInput;
        arr.push_back(userInput);
    } while (userInput != 0);

    int sum = 0;
    int vecSize = arr.size();
    for (int i = 0; i < vecSize; ++i)
    {
        sum += arr[i];
    }
    std::cout << "Suma: " << sum << std::endl;

    bubbleSort(arr);

}
