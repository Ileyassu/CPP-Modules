#include "Cat.hpp"

Cat::Cat():Animal(){
    std::cout << "Constructor was called from Cat class\n";
    this->type = "Cat";
};

Cat::Cat(const Cat &obj){
    std::cout << "Copy Constructor was called from Cat class\n";
    this->type = obj.type;
};

Cat &Cat::operator=(const Cat &obj)
{
    if (this == &obj)
        return *this;
    this->type = obj.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Dog was destroyed\n";
}

void Cat::makeSound() const
{
    std::cout << "Miaw Miaw Nigger\n";
}

// std::string Cat::getType() const
// {
//     return Cat::type;
// }