#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap::ClapTrap(){
    std::cout << "ScavTrap default constructor called\n";
    this->name = "_default";
    setHitPoints(100);
    setEenergyPoints(50);
    setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name): ClapTrap::ClapTrap(name){
    std::cout << "ScavTrap parameterized constructor called\n";
    setHitPoints(100);
    setEenergyPoints(50);
    setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj) {
    std::cout << "ScavTrap copy constructor called\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
    std::cout << "ScavTrap copy operator called\n";

    if (this == &obj)
        return *this;
    ClapTrap::operator=(obj);
    return *this;
}

void ScavTrap::attack(const std::string &target)
{
    if (attackDamage <= 0) {
        std::cout << "ScavTrap " << name << " can't attack because it has no attack damage.\n";
        return;
    }
    if (hitPoints <= 0) {
        std::cout << "ScavTrap " << name << " can't attack because it has no hit points left.\n";
        return;
    }
    if (energyPoints <= 0) {
        std::cout << "ScavTrap " << name << " can't attack because it has no energy points left.\n";
        return;
    }
    energyPoints--;
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!\n";
}

void ScavTrap::takeDamage(unsigned int amount)
{
     if (hitPoints <= 0) {
        std::cout << "ScavTrap " << name << " can't take damage because it's already at 0 hit points.\n";
        return;
    }
    hitPoints -= amount;
    if (hitPoints < 0) hitPoints = 0;
    std::cout << "ScavTrap " << name << " takes " << amount << " points of damage! Remaining hit points: " << hitPoints << "\n";
}
void ScavTrap::beRepaired(unsigned int amount)
{
     if (energyPoints <= 0) {
        std::cout << "ScavTrap " << name << " can't repair itself because it has no energy points left.\n";
        return;
    }
    energyPoints--;
    hitPoints += amount;
    std::cout << "ScavTrap " << name << " repairs itself, regaining " << amount << " hit points! Current hit points: " << hitPoints << "\n";
}

void ScavTrap::guardGate() {
        std::cout << getName() << " poweeeeeeeer pew pew\n";
    }
ScavTrap::~ScavTrap(){
    std::cout << getName() << " ScavTrap was destroted\n";
}