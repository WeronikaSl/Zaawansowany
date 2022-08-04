#include <iostream>
#include <fstream>
#include <string>

int main()
{
    //std::string fileNameWithPath("C:\\Users\\Michal\\source\\repos\\SDA_CPP1\\CPP_Zaawansowany\\Pliki\\Pliki.cpp"); // cała ścieżka do pliku
    std::string fileName("Pliki2.cpp"); //szuka pliku obok pliku wykonywalnego (.exe) naszego programu
    std::ifstream file(fileName); // tworzymy sobie wejsciowy strumien plikowy

    if (file.is_open()) //sprawdzenie czy otworzyłem plik
    {
        std::cout << "Hurra wczytałem plik " << fileName << std::endl << std::endl;
    }
    else
    {
        std::cout << "Nie mogę otworzyć pliku :(";
        return -1;
    }

    while (file.good() && !file.eof()) // dopóki plik jest dobry i nie dojechalismy do konca pliku
    {
        std::string str;
        //file >> str; //wczytuje kolejne wartosci tak jak przy cin (czyli do pierwszego białego znaku)
        std::getline(file, str); // wczytuje całą linie - do znaku nowej lini do stringa
        std::cout << str << std::endl;
    }
    file.close();
}