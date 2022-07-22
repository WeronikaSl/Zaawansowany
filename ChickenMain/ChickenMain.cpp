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
    std::unique_ptr<Chicken> smartPtr(new Chicken());
    Chicken* rawPtr = new Chicken();
    delete rawPtr;
}

int main()
{
    //Chicken c;
    fun();

}
