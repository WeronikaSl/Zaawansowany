#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

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

    auto maxElement = std::max_element(vectOfSpaces.begin(), vectOfSpaces.end()); //zwraca iterator do max elementu
    int longest = std::distance(vectOfSpaces.begin(), maxElement) + 1; //distance zwraca ilość inkrementacji jaka musiała nastąpić pomiędzy tymi elementami, +1 bo begin to 0
    std::cout << "Najdłuższe zdanie to linijka: " << longest << std::endl;
    
}
