#include "Dog.hpp"

Dog::Dog():Animal(){
    std::cout << "Constructor was called from Dog class\n";
    this->type = "Dog";
};

Dog::Dog(const Dog &obj){
    std::cout << "Copy Constructor was called from Dog class\n";
    this->type = obj.type;
};

Dog &Dog::operator=(const Dog &obj)
{
    if (this == &obj)
        return *this;
    this->type = obj.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog was destroyed\n";
}

void Dog::makeSound() const
{
    std::cout << "whoof whoof or whatever that is\n";
}