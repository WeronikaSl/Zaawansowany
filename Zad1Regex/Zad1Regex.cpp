#include <iostream>
#include <regex>

std::string userInput()
{
    std::string email = {};
    std::cout << "Podaj email:";
    std::cin >> email;
    return email;
}
bool checkEmail(const std::string& email)
{
    std::regex emailRegex("[a-z0-9_.]{3,}@[a-z0-9_]+.[a-z]{2,3}");
    return std::regex_match(email, emailRegex);

}

int main()
{
    std::cout << checkEmail(userInput());

}
