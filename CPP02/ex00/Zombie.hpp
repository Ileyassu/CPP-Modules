#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

class Zombie
{
    private :
        std::string name;
    public :
        Zombie(std::string name);
        std::string get_name();
        void announce( void );
        ~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif