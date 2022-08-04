#include <iostream>
#include <string>
#include <regex>
#include <iomanip>
#include <chrono>
#include <vector>
#include <random>

std::string userInput()
{
    std::string email = {};
    std::cout << "Podaj adres email: ";
    std::cin >> email;
    return email;
}

bool ifRegexCorrect(const std::string& email)
{
    std::regex reg("[a-z0-9_.]{3,}@[a-z0-9_]+.[a-z]{2,3}");
    return std::regex_match(email, reg);
}

int generateRadomNum (int range1, int range2)
{
    std::random_device r; 
    std::default_random_engine defEngine(r()); 
    std::uniform_int_distribution<int> intDistro(range1, range2);
    int result = (intDistro(defEngine));
    return result;
}

int main()
{
    auto start = std::chrono::steady_clock::now();
    std::cout << ifRegexCorrect(userInput()) << std::endl;
    auto end = std::chrono::steady_clock::now();

    std::chrono::duration<double, std::milli> elapsed = end - start;
    auto functionDuration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() / 1000.0;

    std::cout << "Wyliczenie tego zajelo " << functionDuration << "s" << std::endl;
    std::cout << "Wyliczenie tego zajelo " << elapsed.count() << "ms" << std::endl;

    std::vector<int> numbers;
    for (auto it = numbers.begin(); it < numbers.end(); ++it)
    {
        numbers.push_back(generateRadomNum(0, 10));
    }

    for (auto it = numbers.begin(); it < numbers.end(); ++it)
    {
        std::cout << *it << " ";
    }


}
