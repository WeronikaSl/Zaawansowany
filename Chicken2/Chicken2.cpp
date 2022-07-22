#include <iostream>
#include <memory>

class Chicken
{
public:
    Chicken()
    {
        std::cout << "Chicken constructor" << std::endl;
    }
    ~Chicken()
    {
        std::cout << "Chicken destructor" << std::endl;
    }
};

void fun()
{
    std::shared_ptr<Chicken> smartPtr = std::make_shared<Chicken>();
    Chicken* rawPtr = new Chicken();
    delete rawPtr;
}

int main()
{
    //Chicken c;
    fun();

}
