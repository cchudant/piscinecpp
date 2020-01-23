/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 04:34:35 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/23 14:26:15 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

static int max(int a, int b)
{
    return a > b ? a : b;
}

static int min(int a, int b)
{
    return a < b ? a : b;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int maxHitPoints,
        int energyPoints, int maxEnergyPoints, int level,
        int meleeAttackDamage, int rangedAttackDamage,
        int armorAttackReduction):
    _name(name), _hitPoints(hitPoints), _maxHitPoints(maxHitPoints),
    _energyPoints(energyPoints), _maxEnergyPoints(maxEnergyPoints),
    _level(level), _meleeAttackDamage(meleeAttackDamage),
    _rangedAttackDamage(rangedAttackDamage), _armorAttackReduction(armorAttackReduction)
{
    std::cout << "CL4P-TP " << _name << " is a new-born star!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "CL4P-TP " << _name << " is now a dead new-born star." << std::endl;
}

const std::string &ClapTrap::getName() const
{
    return _name;
}

const int &ClapTrap::getHitPoints() const
{
    return _hitPoints;
}

const int &ClapTrap::getMaxHitPoints() const
{
    return _maxHitPoints;
}

const int &ClapTrap::getEnergyPoints() const
{
    return _energyPoints;
}

const int &ClapTrap::getMaxEnergyPoints() const
{
    return _maxEnergyPoints;
}

const int &ClapTrap::getLevel() const
{
    return _level;
}

const int &ClapTrap::getMeleeAttackDamage() const
{
    return _meleeAttackDamage;
}

const int &ClapTrap::getRangedAttackDamage() const
{
    return _rangedAttackDamage;
}

const int &ClapTrap::getArmorAttackReduction() const
{
    return _armorAttackReduction;
}

void ClapTrap::setEnergyPoints(const int &energyPoints)
{
    _energyPoints = energyPoints;
}

void ClapTrap::setHitPoints(const int &hitPoints)
{
    _hitPoints = hitPoints;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    int newHp = max(_hitPoints - int(amount / (_armorAttackReduction + 1)), 0);
    std::cout << "CL4P-TP " << _name
        << " took " <<  _hitPoints - newHp
        << " points of damage!" << std::endl;
    _hitPoints = newHp;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    int newHp = min(_hitPoints + int(amount), _maxHitPoints);
    std::cout << "CL4P-TP " << _name
        << " was repaired by " << newHp - _hitPoints
        << " points!" << std::endl;
    _hitPoints = newHp;
}
