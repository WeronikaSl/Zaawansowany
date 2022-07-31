#include <iostream>
#include <regex>

bool checkPESEL(const std::string& pesel)
{
    std::regex peselRegex("^\\d{11}$");
    return std::regex_match(pesel, peselRegex);
}


int main()
{
    std::string pesel1("123456789");
    std::string pesel2("12345678");
    std::string pesel3("12345678999");
    std::string definitelyNotPesel("1d343greg42");

    std::cout << checkPESEL(pesel1) << std::endl;
    std::cout << checkPESEL(pesel2) << std::endl;
    std::cout << checkPESEL(pesel3) << std::endl;
    std::cout << checkPESEL(definitelyNotPesel) << std::endl;

}
