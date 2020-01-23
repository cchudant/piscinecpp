/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 04:34:35 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/23 15:15:39 by cchudant         ###   ########.fr       */
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

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints):
    _name(name), _hitPoints(hitPoints), _energyPoints(energyPoints)
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

const int &ClapTrap::getEnergyPoints() const
{
    return _energyPoints;
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
    int newHp = max(_hitPoints - int(amount / (armorAttackReduction() + 1)), 0);
    std::cout << "CL4P-TP " << _name
        << " took " <<  _hitPoints - newHp
        << " points of damage!" << std::endl;
    _hitPoints = newHp;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    int newHp = min(_hitPoints + int(amount), maxHitPoints());
    std::cout << "CL4P-TP " << _name
        << " was repaired by " << newHp - _hitPoints
        << " points!" << std::endl;
    _hitPoints = newHp;
}
