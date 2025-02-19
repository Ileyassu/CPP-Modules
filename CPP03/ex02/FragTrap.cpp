#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap::ClapTrap() {
    setHitPoints(100);
    setEenergyPoints(100);
    setAttackDamage(30);
    std::cout << "FragTrap default constructor called\n";
}

FragTrap::FragTrap (std::string name):ClapTrap::ClapTrap(name){
    setHitPoints(100);
    setEenergyPoints(100);
    setAttackDamage(30);
    std::cout << "FragTrap parameterized constructor called\n";
};

FragTrap::FragTrap(const FragTrap &obj):ClapTrap::ClapTrap(obj){
    std::cout << "FragTrap copy constructor called\n";
};

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
    std::cout << "FragTrap copy assignement operator called\n";
    if (this == &obj)
        return *this;
    ClapTrap::operator=(obj);
    return *this;
}

void FragTrap::attack(const std::string &target)
{
    if (attackDamage <= 0) {
        std::cout << "FragTrap " << name << " can't attack because it has no attack damage.\n";
        return;
    }
    if (hitPoints <= 0) {
        std::cout << "FragTrap " << name << " can't attack because it has no hit points left.\n";
        return;
    }
    if (energyPoints <= 0) {
        std::cout << "FragTrap " << name << " can't attack because it has no energy points left.\n";
        return;
    }
    energyPoints--;
    std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!\n";
}

void FragTrap::takeDamage(unsigned int amount)
{
     if (hitPoints <= 0) {
        std::cout << "FragTrap " << name << " can't take damage because it's already at 0 hit points.\n";
        return;
    }
    hitPoints -= amount;
    if (hitPoints < 0) hitPoints = 0;
    std::cout << "FragTrap " << name << " takes " << amount << " points of damage! Remaining hit points: " << hitPoints << "\n";
}
void FragTrap::beRepaired(unsigned int amount)
{
     if (energyPoints <= 0) {
        std::cout << "FragTrap " << name << " can't repair itself because it has no energy points left.\n";
        return;
    }
    energyPoints--;
    hitPoints += amount;
    std::cout << "FragTrap " << name << " repairs itself, regaining " << amount << " hit points! Current hit points: " << hitPoints << "\n";
}

FragTrap::~FragTrap()
{
    std::cout << getName()<< " FragTrap destructor\n";
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "salaaaamo 3alikom m3ak twam mafyozi wlad rbat ta9adom\n";
}
void FragTrap::guardGate()
{
    std::cout << "pew pew spiderman\n";
}   