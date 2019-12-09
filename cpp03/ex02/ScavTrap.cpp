/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 04:21:05 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 04:49:41 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    _hitPoints = 100;
    _maxHitPoints = 100;
    _energyPoints = 50;
    _maxEnergyPoints = 50;
    _level = 1;
    _meleeAttackDamage = 20;
    _rangedAttackDamage = 15;
    _armorAttackReduction = 3;
    std::cout << "FR4G-TP " << _name << " was born." << std::endl;
}

ScavTrap::~ScavTrap()
{
    (void)_maxEnergyPoints;
    (void)_level;
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
