/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 03:11:07 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 02:50:35 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

static int max(int a, int b)
{
    return a > b ? a : b;
}

static int min(int a, int b)
{
    return a < b ? a : b;
}

FragTrap::FragTrap(std::string name): _name(name), _hitPoints(100),
    _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
    _level(1), _meleeAttackDamage(30), _rangedAttackDamage(20),
    _armorAttackReduction(5)
{
    std::cout << "FR4G-TP " << _name << " was created." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FR4G-TP " << _name << " was destroyed." << std::endl;
}

void FragTrap::rangedAttack(const std::string &target) const
{
    std::cout << "FR4G-TP " << _name
        << " attacks " << target
        << " at range, causing " << _rangedAttackDamage
        << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(const std::string &target) const
{
    std::cout << "FR4G-TP " << _name
        << " attacks " << target
        << " at melee, causing " << _meleeAttackDamage
        << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    int newHp = max(_hitPoints - int(amount / (_armorAttackReduction + 1)), 0);
    std::cout << "FR4G-TP " << _name
        << " took " <<  _hitPoints - newHp
        << " points of damage!" << std::endl;
    _hitPoints = newHp;
}

void FragTrap::beRepaired(unsigned int amount)
{
    int newHp = min(_hitPoints + int(amount), _maxHitPoints);
    std::cout << "FR4G-TP " << _name
        << " was repaired by " << newHp - _hitPoints
        << " points!" << std::endl;
    _hitPoints = newHp;
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
