#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name)
{
    _type = type;
    _name = name;
}

std::string Zombie::getType() const
{
    return _type;
}

std::string Zombie::getName() const
{
    return _name;
}

void Zombie::announce() const
{
    std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
}