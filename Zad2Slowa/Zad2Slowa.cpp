#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <numeric>

int main()
{
    std::ifstream file("zdania.csv");

    if (!file.is_open())
    {
        std::cout << "Nie udalo sie otworzyc pliku";
        return -1;
    }
    std::string str;
    std::vector<std::string> strings; // to jest potrzebne tylko do wyświetlenia tekstu z pliku na konsoli 
    std::vector<int> vectOfSpaces; //wrzucamy spacje z każdego zdania (zmienna words) + 1 żeby mieć ilość słów z każdego zdania
    int space = 0;
    while (std::getline(file, str))
    {
        strings.push_back(str); // to jest potrzebne tylko do wyświetlenia tekstu z pliku na konsoli 
        //std::cout << str << std::endl;
        for (int i = 0; i <= str.length(); i++)
        {
            if (str[i] == ' ')
            {
                space++;
            }
        }
        int words = space + 1;

        vectOfSpaces.push_back(words);

        //std::cout << words << std::endl;

        space = 0;
        words = 0;
    }
    file.close();

//najdłuższe zdanie (najwięcej słów)
    auto maxElement = std::max_element(vectOfSpaces.begin(), vectOfSpaces.end()); //zwraca iterator do max elementu
    int longest = std::distance(vectOfSpaces.begin(), maxElement) + 1; //distance zwraca ilość inkrementacji jaka musiała nastąpić pomiędzy tymi elementami, +1 bo begin to 0
    std::cout 
        << "Najdłuższe zdanie (słowa) to linijka: " << longest << std::endl
        << "Jej treść to: " << strings.at(longest) << std::endl;

    std::cout << std::endl;

//najkrotsze zdanie (najmniej słów)
    auto minElement = std::min_element(vectOfSpaces.begin(), vectOfSpaces.end()); 
    int shortest = std::distance(vectOfSpaces.begin(), minElement) + 1; //distance zwraca ilość inkrementacji jaka musiała nastąpić pomiędzy tymi elementami, +1 bo begin to 0
    std::cout
        << "Najkrótsze zdanie (słowa) to linijka: " << shortest << std::endl
        << "Jej treść to: " << strings.at(shortest) << std::endl;

    std::cout << std::endl;

//wszystkie wystąpienia wszystkich słów w pliku
    int sumofWords = std::accumulate(vectOfSpaces.begin(), vectOfSpaces.end(), 0); //to zero inicjalizuje zmienną,do niej dodajemy wartości z wektora (chyba)
    std::cout << "Suma wszystkich słów w pliku to: " << sumofWords << std::endl;
}
