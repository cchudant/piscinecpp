/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 04:21:05 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 07:21:31 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name):
    ClapTrap(name, this->baseHitPoints(), this->baseEnergyPoints())
{
    std::cout << "FR4G-TP " << _name << " was born." << std::endl;
}

ScavTrap::ScavTrap(std::string name, int hitPoints, int energyPoints):
    ClapTrap(name, hitPoints, energyPoints)
{
    std::cout << "FR4G-TP " << _name << " was born." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "FR4G-TP " << _name << " died in a tornado." << std::endl;
}

static const std::string FUNNY_CHALLENGES[] = {
    "I have no idea what that challenge should be.",
    "What even is that piscine day.",
    "I can't believe they are wasting our time like that.",
    "You thought this would be an in-game quote, but it was me, DIO.",
    "I am challenging you, newcomer.",
};

void ScavTrap::challengeNewcomer(const std::string &target)
{
    if (_energyPoints < 25)
    {
        std::cout << "FR4G-TP " << _name
            << " cannot challenge " << target
            << " because it is out of energy!" << std::endl;
        return;
    }

    _energyPoints -= 25;
    std::string attack = FUNNY_CHALLENGES[rand() % 5];
    std::cout << "FR4G-TP " << _name
        << " challenges " << target
        << ": \"" << attack
        << "\"" << std::endl;
}

// base attributes

int ScavTrap::baseHitPoints()
{
    return 100;
}

int ScavTrap::maxHitPoints()
{
    return 100;
}

int ScavTrap::baseEnergyPoints()
{
    return 50;
}

int ScavTrap::maxEnergyPoints()
{
    return 50;
}

int ScavTrap::level()
{
    return 1;
}

int ScavTrap::meleeAttackDamage()
{
    return 20;
}

int ScavTrap::rangedAttackDamage()
{
    return 15;
}

int ScavTrap::armorAttackReduction()
{
    return 3;
}
