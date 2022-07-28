#include <iostream>
#include <string>
#include <stack>

int main()
{
    std::string word = "Ericsson";
    size_t leng = word.length();
    std::stack<char> sta = {};

    for (size_t i = 0; i < leng; ++i)
    {
        sta.push(word[i]);
    }
    for (size_t i = 0; i < leng; ++i)
    {
        word[i] = sta.top();
        sta.pop();
    }
    std::cout << word << std::endl;

}
