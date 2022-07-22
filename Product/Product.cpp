#include <iostream>
#include <string>


class Product
{
private:
    float _price = 0.0f;
    std::string _name = {};
public:
    Product()
    {
        std::cout << "Product constructor" << std::endl;
    }
    Product(float price, std::string name) : _price(price), _name(name)
    {
        std::cout << "Product constructor" << std::endl;
    }
    ~Product()
    {
        std::cout << "Product destructor" << std::endl;
    }

};

int main()
{
    std::unique_ptr<Product> ptr = std::make_unique<Product>();
    std::unique_ptr<Product> ptr2 = std::make_unique<Product>(5.4f, "book");
}
