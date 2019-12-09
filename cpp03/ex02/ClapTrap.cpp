/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 04:34:35 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 05:07:15 by cchudant         ###   ########.fr       */
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

ClapTrap::ClapTrap(std::string name): _name(name)
{
    std::cout << "FR4G-TP " << _name << " is a new-born star!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "FR4G-TP " << _name << " is now a dead new-born star." << std::endl;
}

void ClapTrap::rangedAttack(const std::string &target)
{
    std::cout << "FR4G-TP " << _name
        << " attacks " << target
        << " at range, causing " << _rangedAttackDamage
        << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(const std::string &target)
{
    std::cout << "FR4G-TP " << _name
        << " attacks " << target
        << " at melee, causing " << _meleeAttackDamage
        << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    int newHp = max(_hitPoints - int(amount / (_armorAttackReduction + 1)), 0);
    std::cout << "FR4G-TP " << _name
        << " took " <<  _hitPoints - newHp
        << " points of damage!" << std::endl;
    _hitPoints = newHp;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    int newHp = min(_hitPoints + int(amount), _maxHitPoints);
    std::cout << "FR4G-TP " << _name
        << " was repaired by " << newHp - _hitPoints
        << " points!" << std::endl;
    _hitPoints = newHp;
}