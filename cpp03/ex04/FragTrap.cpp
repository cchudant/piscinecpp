/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 03:11:07 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 07:21:21 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name):
    ClapTrap(name, this->baseHitPoints(), this->baseEnergyPoints())
{
    std::cout << "FR4G-TP " << _name << " was created." << std::endl;
}

FragTrap::FragTrap(std::string name, int hitPoints, int energyPoints):
    ClapTrap(name, hitPoints, energyPoints)
{
    std::cout << "FR4G-TP " << _name << " was created." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FR4G-TP " << _name << " was destroyed." << std::endl;
}

static const std::string FUNNY_ATTACKS[] = {
    "I have no idea what frag trap is!",
    "I guess frag trap is a borderland reference, but I haven't played the game!",
    "Please. Can someone explain what frag trap is. I can't find anything on google.",
    "C++ is not a very nice language. Try rust instead.",
    "These attacks are not very funny. Sorry.",
};

void FragTrap::vaulthunter_dot_exe(const std::string &target)
{
    if (_energyPoints < 25)
    {
        std::cout << "FR4G-TP " << _name
            << " cannot attack " << target
            << " because it is out of energy!" << std::endl;
        return;
    }

    _energyPoints -= 25;
    std::string attack = FUNNY_ATTACKS[rand() % 5];
    std::cout << "FR4G-TP " << _name
        << " attacks " << target
        << ": \"" << attack
        << "\"" << std::endl;
}

// base attributes

int FragTrap::baseHitPoints()
{
    return 100;
}

int FragTrap::maxHitPoints()
{
    return 100;
}

int FragTrap::baseEnergyPoints()
{
    return 100;
}

int FragTrap::maxEnergyPoints()
{
    return 100;
}

int FragTrap::level()
{
    return 1;
}

int FragTrap::meleeAttackDamage()
{
    return 30;
}

int FragTrap::rangedAttackDamage()
{
    return 20;
}

int FragTrap::armorAttackReduction()
{
    return 5;
}

