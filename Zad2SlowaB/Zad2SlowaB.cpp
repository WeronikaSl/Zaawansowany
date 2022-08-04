#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>

int main()
{
    std::ifstream file("zdania.csv");

    if (!file.is_open())
    {
        std::cout << "Nie mogę otworzyć pliku" << std::endl;
        return -1; //jeśli plik się nie otworzy to program się kończy
    }

    std::vector <std::string> vecOfTextLines = {}; //wektor przechowujący linijki tekstu po kolei
    std::string lineInText = {};
    std::vector<int> vecOfChars = {}; //przechowuje ilość znaków w każdym zdaniu bez spacji
    unsigned int characters = 0; //zmienna pomocnicza, do której będziemy zliczać znaki ze zdań

    while (file.good() && !file.eof())
    {
        std::getline(file, lineInText); //wczytujemy z pliku do programu
        //std::cout << lineInText << std::endl; //sprawdzamy czy plik się wczytał
        vecOfTextLines.push_back(lineInText);

        for (auto it = lineInText.begin(); it < lineInText.end(); ++it) //przechodzimy po pojedynczym stringu, it to char
        {
            if ((*it >= 'a' && *it <= 'z') || (*it >= 'A' && *it <= 'Z')) //ma liczyć tylko litery
            {
                ++characters; 
            }
        }
        vecOfChars.push_back(characters);
        //std::cout << characters << std::endl; //sprawdzamy czy dobrze działa
        characters = 0;
    }
    file.close();

//najdłuższe zdanie (najwięcej liter)
    auto maxElement = std::max_element(vecOfChars.begin(), vecOfChars.end()); //zwraca iterator do max elementu
    int longest = std::distance(vecOfChars.begin(), maxElement) + 1; //distance zwraca ilość inkrementacji jaka musiała nastąpić pomiędzy tymi elementami, +1 bo begin to 0
    std::cout
        << "Najdłuższe zdanie (litery) to linijka: " << longest << std::endl
        << "Jej treść to: " << vecOfTextLines.at(longest) << std::endl;

    std::cout << std::endl;

//najkrotsze zdanie (najmniej liter)
    auto minElement = std::min_element(vecOfChars.begin(), vecOfChars.end());
    int shortest = std::distance(vecOfChars.begin(), minElement) + 1; //distance zwraca ilość inkrementacji jaka musiała nastąpić pomiędzy tymi elementami, +1 bo begin to 0
    std::cout
        << "Najkrótsze zdanie (litery) to linijka: " << shortest << std::endl;
        //<< "Jej treść to: " << vecOfTextLines.at(shortest) << std::endl; //czemu to nie działa? :(

}
