/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 04:21:05 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/23 15:16:32 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name):
    ClapTrap(name, baseHitPoints(), baseEnergyPoints())
{
    std::cout << "SC4V-TP " << getName() << " was born." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "SC4V-TP " << getName() << " died in a tornado." << std::endl;
}

void ScavTrap::rangedAttack(const std::string &target) const
{
    std::cout << "SC4V-TP " << getName()
        << " attacks " << target
        << " at range, causing " << rangedAttackDamage()
        << " points of damage, wow!" << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target) const
{
    std::cout << "SC4V-TP " << getName()
        << " attacks " << target
        << " at melee, causing " << meleeAttackDamage()
        << " points of damage, wow!" << std::endl;
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
    if (getEnergyPoints() < 25)
    {
        std::cout << "SC4V-TP " << getName()
            << " cannot challenge " << target
            << " because it is out of energy!" << std::endl;
        return;
    }

    setEnergyPoints(getEnergyPoints() - 25);
    std::string attack = FUNNY_CHALLENGES[rand() % 5];
    std::cout << "SC4V-TP " << getName()
        << " challenges " << target
        << ": \"" << attack
        << "\"" << std::endl;
}

// base attributes

int ScavTrap::baseHitPoints() const
{
    return 100;
}

int ScavTrap::maxHitPoints() const
{
    return 100;
}

int ScavTrap::baseEnergyPoints() const
{
    return 50;
}

int ScavTrap::maxEnergyPoints() const
{
    return 50;
}

int ScavTrap::level() const
{
    return 1;
}

int ScavTrap::meleeAttackDamage() const
{
    return 20;
}

int ScavTrap::rangedAttackDamage() const
{
    return 15;
}

int ScavTrap::armorAttackReduction() const
{
    return 3;
}
