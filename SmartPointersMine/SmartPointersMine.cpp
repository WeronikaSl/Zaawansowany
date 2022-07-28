#include <iostream>
#include <string>

class Entity
{
public:
    Entity()
    {
        std::cout << "Entity constructed" << std::endl;
    }
    ~Entity()
    {
        std::cout << "Entity destructed" << std::endl;

    }
};

int main()
{
    std::unique_ptr<Entity> entity = std::make_unique<Entity>();
    std::shared_ptr<Entity> ent = std::make_shared<Entity>();
    std::shared_ptr<Entity> e = ent;
    std::cout << "HI" << std::endl;
}
