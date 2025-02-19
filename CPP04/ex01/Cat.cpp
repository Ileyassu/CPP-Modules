#include "Cat.hpp"

Cat::Cat():Animal(){
    std::cout << "default Constructor was called from Cat class\n";
    this->type = "Cat";
    this->smol = new Brain();
};

Cat::Cat(const Cat &obj){
    std::cout << "Copy Constructor was called from Cat class\n";
    this->type = obj.type;
    this->smol = new Brain(*obj.smol);
};

Cat &Cat::operator=(const Cat &obj)
{
    if (this == &obj)
        return *this;
    delete this->smol;
    this->type = obj.type;
    this->smol = new Brain(*obj.smol);
    return (*this);
}

Cat::~Cat()
{
    delete smol;
    std::cout << "Cat was destroyed\n";
}

void Cat::makeSound() const
{
    std::cout << "Miaw Miaw Nigger\n";
}

std::string Cat::getType() const
{
    return this->type;
}

Brain &Cat::getBrain()
{
    return *this->smol;
}