#include <iostream>
#include <map>
#include <string>


int main()
{
    std::map<std::string, std::string> dictionary { {"hello", "cześć"}, {"breakfast", "śniadanie"}, {"shower", "prysznic"},{"coffee", "kawa"} };

    std::cout << "hello means: " << dictionary.at("hello");
}

