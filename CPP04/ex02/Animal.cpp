#include "Animal.hpp"

Animal::Animal():type("Animal")
{
    std::cout << "Calling default constructor from Animal Class\n";
};
Animal::Animal(const Animal &obj):type(obj.type)
{
    std::cout << "Calling Copy Constructor from Animal Class\n";
};
Animal &Animal::operator=(const Animal &obj)
{
    std::cout << "Calling Copy Assignement Operator from Animal class\n";
    if (this == &obj)
        return *this;
    this->type = obj.type;
    return *this;
}
void Animal::makeSound() const
{
    if (this->type == "Animal")
    {
        std::cout << "No animal type was specified\n";
    }
}

std::string Animal::getType() const
{
    return this->type;
}

Animal::~Animal()
{
    std::cout << "Destructor from Animal class\n";
}