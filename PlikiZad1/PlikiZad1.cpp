#include <iostream>
#include <string>
#include <map>

void zad1()
{
    std::cout << "Podaj nazwę produktu: ";
    std::string s;
    std::getline(std::cin, s); //wczytuje aż do napotkania znaku nowej linii

    std::cout << "Wczytano: " << s << std::endl;
}

int main()
{
    std::map<std::string, int> shoppingList;
}
