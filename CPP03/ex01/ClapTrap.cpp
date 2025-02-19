#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name("default"), hitPoints(10), energyPoints(10), attackDamage(0){
    std::cout << "ClapTrap default constructor is being called\n";
};

ClapTrap::ClapTrap(std::string name):name(name), hitPoints(10), energyPoints(10), attackDamage(0){
    std::cout << "ClapTrap parameterized constructor is being called\n";
};
ClapTrap::ClapTrap(const ClapTrap &obj)
{
    this->attackDamage = obj.attackDamage;
    this->energyPoints = obj.energyPoints;
    this->hitPoints = obj.hitPoints;
    std::cout << "ClapTrap Copy constructor is being called\n";
    this->name = obj.name;
};

ClapTrap::~ClapTrap(){
    std::cout << name << " ClapTrap was destroyed\n";

}
ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
    std::cout << "ClapTrap Copy assignement operator is being called\n";
    if(this == &obj)
        return *this;
    this->name = obj.name;
    this->attackDamage = obj.attackDamage;
    this->energyPoints = obj.energyPoints;
    this->hitPoints = obj.hitPoints;
    return *this;
};

void ClapTrap::attack(const std::string& target) {
    if (attackDamage <= 0) {
        std::cout << "ClapTrap " << name << " can't attack because it has no attack damage.\n";
        return;
    }
    if (hitPoints <= 0) {
        std::cout << "ClapTrap " << name << " can't attack because it has no hit points left.\n";
        return;
    }
    if (energyPoints <= 0) {
        std::cout << "ClapTrap " << name << " can't attack because it has no energy points left.\n";
        return;
    }
    energyPoints--;
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints <= 0) {
        std::cout << "ClapTrap " << name << " can't take damage because it's already at 0 hit points.\n";
        return;
    }
    hitPoints -= amount;
    if (hitPoints < 0) hitPoints = 0;
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage! Remaining hit points: " << hitPoints << "\n";
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (energyPoints <= 0) {
        std::cout << "ClapTrap " << name << " can't repair itself because it has no energy points left.\n";
        return;
    }
    energyPoints--;
    hitPoints += amount;
    std::cout << "ClapTrap " << name << " repairs itself, regaining " << amount << " hit points! Current hit points: " << hitPoints << "\n";
}

std::string ClapTrap::getName()
{
    return name;
}

void ClapTrap::setHitPoints(int pts)
{
    this->hitPoints = pts;
}

void ClapTrap::setEenergyPoints(int pts)
{
 this->energyPoints = pts;
}

void ClapTrap::setAttackDamage(int pts)
{
 this->attackDamage = pts ;
}

int ClapTrap::getHitPoints()
{
    return hitPoints;
}

int ClapTrap::getEnergyPoints()
{
    return energyPoints;
}

int ClapTrap::getAttackDamage()
{
    return attackDamage;
}

