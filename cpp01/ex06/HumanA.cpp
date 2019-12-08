#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(&weapon)
{
}

HumanA::HumanA(std::string name): name(name), weapon(NULL)
{
}

void HumanA::setName(std::string name)
{
    this->name = name;
}

void HumanA::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

std::string HumanA::getName() const
{
    return name;
}

void HumanA::attack() const
{
    if (!weapon)
    {
        std::cout << name << " attacks with nothing" << std::endl;
        return;
    }
    std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}