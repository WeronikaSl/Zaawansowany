#include <iostream>
#include <string>

class Entity
{
private:
    std::string m_Name = "meow";
    mutable int counter = 0;
public:
    const std::string& getName() const
    {
        counter++;
        return m_Name;
    }
};

int main()
{
    const Entity e;
    std::cout << e.getName();
}

