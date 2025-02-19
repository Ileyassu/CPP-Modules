#include "Animal.hpp"
#include "Dog.hpp" // cause they're my favorite after all
#include "Cat.hpp" //ungrateful creatures

int main()
{
    const Animal *meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    // j->makeSound();
    // std::cout << meta->getType();
    // std::cout << j->getType();
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete  meta;
    delete  j;
    delete  i;
}