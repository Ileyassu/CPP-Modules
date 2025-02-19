#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    protected:
        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &obj);
        virtual ~ClapTrap();
        ClapTrap &operator=(const ClapTrap &obj);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void setHitPoints(int pts);
        void setEenergyPoints(int pts);
        void setAttackDamage(int pts);
        std::string getName();
        int getHitPoints();
        int getEnergyPoints();
        int getAttackDamage();
};

#endif