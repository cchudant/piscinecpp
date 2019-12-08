#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon &weapon): name(name), weapon(&weapon)
{
}

HumanB::HumanB(std::string name): name(name), weapon(NULL)
{
}

void HumanB::setName(std::string name)
{
    this->name = name;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

std::string HumanB::getName() const
{
    return name;
}

void HumanB::attack() const
{
    if (!weapon)
    {
        std::cout << name << " attacks with nothing" << std::endl;
        return;
    }
    std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}