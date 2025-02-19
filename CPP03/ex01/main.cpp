#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
    ScavTrap joseph("testsetest");
    ScavTrap josephine;
    ScavTrap ww = josephine;
    ww = joseph;
    ww.attack("ww");
    std::cout << ww.getName() << "\n" << ww.getHitPoints() << "\n"<< ww.getAttackDamage() << "\n" << ww.getEnergyPoints() << "\n";

    std::cout << joseph.getName() << "\n" << joseph.getHitPoints() << "\n"<< joseph.getAttackDamage() << "\n" << joseph.getEnergyPoints() << "\n";
    std::cout << josephine.getName() << "\n" << josephine.getHitPoints() << "\n"<< josephine.getAttackDamage() << "\n" << josephine.getEnergyPoints() << "\n";
}