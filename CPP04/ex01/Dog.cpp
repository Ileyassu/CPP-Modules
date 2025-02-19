#include "Dog.hpp"

Dog::Dog():Animal(){
    std::cout << "default Constructor was called from Dog class\n";
    this->smol = new Brain();
    this->type = "Dog";
};

Dog::Dog(const Dog &obj){
    std::cout << "Copy Constructor was called from Dog class\n";
    this->smol = new Brain(*obj.smol);
    this->type = obj.type;
};

Dog &Dog::operator=(const Dog &obj)
{
    if (this == &obj)
        return *this;
    delete this->smol;
    this->smol = new Brain(*obj.smol);
    this->type = obj.type;
    return (*this);
}

Dog::~Dog()
{
    delete smol;
    std::cout << "Dog was destroyed\n";
}

void Dog::makeSound() const
{
    std::cout << "whoof whoof or whatever that is\n";
}

Brain &Dog::getBrain()
{
    return *this->smol;
}