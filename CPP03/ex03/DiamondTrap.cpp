#include "DiamondTrap.hpp"

// • Hit points (FragTrap)
// • Energy points (ScavTrap)
// • Attack damage (FragTrap)
// • attack() (Scavtrap)

DiamondTrap::DiamondTrap()
    : ClapTrap(), ScavTrap(), FragTrap(), name("default") {
    hitPoints = FragTrap::hitPoints;
    energyPoints = ScavTrap::energyPoints;
    attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap default constructor\n";
}

DiamondTrap::DiamondTrap(std::string name)
{
    this->name = name;
    std::cout << "Parameterized Diamond constructor\n";
}

void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}


void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << name << ", ClapTrap name: " << ClapTrap::name << "\n";
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap deconstructor\n";
}