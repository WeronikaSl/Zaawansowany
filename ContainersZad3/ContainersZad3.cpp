#include <iostream>
#include <set>

bool containsAllLetters(std::string text)
{
    std::set<char> alphabetChecker;
    for (auto it = text.begin(); it != text.end(); ++it) //dopóki iterator jest różny od ostatniego to ma się robić
    {
        if ((*it >= 65) && (*it <= 90))
        {
            *it += 32;
        }
        if ((*it > 97) && (*it < 122))
        {
            alphabetChecker.insert(*it);
        }

    }
    return alphabetChecker.size() == 26;
}

int main()
{
    std::cout << "Hello World!\n";
}

