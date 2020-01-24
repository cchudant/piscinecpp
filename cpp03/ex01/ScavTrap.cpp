/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 04:21:05 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 02:50:41 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

static int max(int a, int b)
{
    return a > b ? a : b;
}

static int min(int a, int b)
{
    return a < b ? a : b;
}

ScavTrap::ScavTrap(std::string name): _name(name), _hitPoints(100),
    _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50),
    _level(1), _meleeAttackDamage(20), _rangedAttackDamage(15),
    _armorAttackReduction(3)
{
    std::cout << "SC4V-TP " << _name << " was born." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "SC4V-TP " << _name << " died in a tornado." << std::endl;
}

void ScavTrap::rangedAttack(const std::string &target) const
{
    std::cout << "SC4V-TP " << _name
        << " attacks " << target
        << " at range, causing " << _rangedAttackDamage
        << " points of damage, wow!" << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target) const
{
    std::cout << "SC4V-TP " << _name
        << " attacks " << target
        << " at melee, causing " << _meleeAttackDamage
        << " points of damage, wow!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    int newHp = max(_hitPoints - int(amount / (_armorAttackReduction + 1)), 0);
    std::cout << "SC4V-TP " << _name
        << " took " <<  _hitPoints - newHp
        << " points of damage!" << std::endl;
    _hitPoints = newHp;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    int newHp = min(_hitPoints + int(amount), _maxHitPoints);
    std::cout << "SC4V-TP " << _name
        << " was repaired by " << newHp - _hitPoints
        << " points!" << std::endl;
    _hitPoints = newHp;
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
        std::cout << "SC4V-TP " << _name
            << " cannot challenge " << target
            << " because it is out of energy!" << std::endl;
        return;
    }

    _energyPoints -= 25;
    std::string attack = FUNNY_CHALLENGES[rand() % 5];
    std::cout << "SC4V-TP " << _name
        << " challenges " << target
        << ": \"" << attack
        << "\"" << std::endl;
}
