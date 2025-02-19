#include "ClapTrap.hpp"

int main()
{
    ClapTrap test;
    ClapTrap clap1("ClapOne");
    ClapTrap clap2("ClapTwo");
    
    clap1.attack("a wild enemy");
    clap2.beRepaired(5);
}