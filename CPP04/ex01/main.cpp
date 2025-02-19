#include "Animal.hpp"
#include "Dog.hpp" // cause they're my favorite after all
#include "Cat.hpp" //ungrateful creatures
#include "Brain.hpp"

int main()
{
    Animal *obj[100];
    for (int i = 0; i < 100; i++)
    {
        if (i < 50)
            obj[i] = new Cat();
        else
            obj[i] = new Dog();
    }
    Dog fred;
    fred.getBrain().setIdea("alo", 0);
    Dog chred = fred;
    std::cout << chred.getBrain().getIdea(0) << "\n";
    for(int i = 0; i < 100; i++)
    {
        delete obj[i];
    }
}