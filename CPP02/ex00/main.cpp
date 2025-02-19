#include "Zombie.hpp"

int main()
{
    Zombie hamid("hamid");
    hamid.announce();
    Zombie *mstafa = newZombie("mstafa");
    mstafa->announce();
    randomChump("npc");
    delete(mstafa);
}