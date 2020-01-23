/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 04:21:05 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/23 15:16:36 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <iostream>

NinjaTrap::NinjaTrap(std::string name):
    ClapTrap(name, baseHitPoints(), baseEnergyPoints())
{
    std::cout << "NINJ4-TP " << getName() << " was born as a ninja." << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "NINJ4-TP " << getName() << " died in a ninja tornado." << std::endl;
}

void NinjaTrap::rangedAttack(const std::string &target) const
{
    std::cout << "NINJ4-TP " << getName()
        << " attacks " << target
        << " at range, causing " << rangedAttackDamage()
        << " points of damage! Not bad!" << std::endl;
}

void NinjaTrap::meleeAttack(const std::string &target) const
{
    std::cout << "NINJ4-TP " << getName()
        << " attacks " << target
        << " at melee, causing " << meleeAttackDamage()
        << " points of damage! Not bad!" << std::endl;
}

void NinjaTrap::ninjaShoebox(const FragTrap &target)
{
    if (getEnergyPoints() < 30)
    {
        std::cout << "NINJ4-TP " << getName()
            << " cannot ninja shoebox " << target.getName()
            << " because it is out of energy!" << std::endl;
        return;
    }

    setEnergyPoints(getEnergyPoints() - 30);
    std::cout << "NINJ4-TP " << getName()
        << " ninja shoebox " << target.getName()
        << ": bzzz!" << std::endl;
}

void NinjaTrap::ninjaShoebox(const ScavTrap &target)
{
    if (getEnergyPoints() < 30)
    {
        std::cout << "NINJ4-TP " << getName()
            << " cannot ninja shoebox " << target.getName()
            << " because it is out of energy!" << std::endl;
        return;
    }

    setEnergyPoints(getEnergyPoints() - 30);
    std::cout << "NINJ4-TP " << getName()
        << " failed to ninja shoebox " << target.getName()
        << "!" << std::endl;
}

void NinjaTrap::ninjaShoebox(const NinjaTrap &target)
{
    if (getEnergyPoints() < 30)
    {
        std::cout << "NINJ4-TP " << getName()
            << " cannot ninja shoebox " << target.getName()
            << " because it is out of energy!" << std::endl;
        return;
    }

    setEnergyPoints(getEnergyPoints() - 30);
    std::cout << "NINJ4-TP " << getName()
        << " ninja shoebox " << target.getName()
        << ": miao." << std::endl;
}

// base attributes

int NinjaTrap::baseHitPoints() const
{
    return 60;
}

int NinjaTrap::maxHitPoints() const
{
    return 60;
}

int NinjaTrap::baseEnergyPoints() const
{
    return 120;
}

int NinjaTrap::maxEnergyPoints() const
{
    return 120;
}

int NinjaTrap::level() const
{
    return 1;
}

int NinjaTrap::meleeAttackDamage() const
{
    return 60;
}

int NinjaTrap::rangedAttackDamage() const
{
    return 5;
}

int NinjaTrap::armorAttackReduction() const
{
    return 0;
}
