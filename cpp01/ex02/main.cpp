#include <iostream>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main()
{
    Zombie zb{"Berserk", "Andy"};
    zb.announce();

    ZombieEvent ze{"Programmer"};
    Zombie *zb2 = ze.newZombie("Carol");
    zb2->announce();
    delete zb2;

    ze.randomChump();
    ze.randomChump();
    ze.randomChump();
}