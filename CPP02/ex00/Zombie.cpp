#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

std::string Zombie::get_name()
{
    return name;
}

void Zombie::announce()
{
    std::cout << get_name() << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " destroyed\n";
}