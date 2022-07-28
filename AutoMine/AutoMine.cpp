#include <iostream>
#include <vector>

std::string GetName()
{
    return "Weronika";
}
int main()
{
    //int a = 5;
    //auto b = a;
    //auto c = 5.5;

    //auto name = GetName();

    std::vector<std::string> strings;
    strings.push_back("apple");
    strings.push_back("orange");

    for (std::vector<std::string>::iterator it = strings.begin(); it != strings.end(); ++it)
    {
        std::cout << *it << std::endl;
    }



    std::cout << "a" << std::endl;
}
