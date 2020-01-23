/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 04:21:05 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/23 14:37:22 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <iostream>

NinjaTrap::NinjaTrap(std::string name):
    ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
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
        << " at range, causing " << getRangedAttackDamage()
        << " points of damage! Not bad!" << std::endl;
}

void NinjaTrap::meleeAttack(const std::string &target) const
{
    std::cout << "NINJ4-TP " << getName()
        << " attacks " << target
        << " at melee, causing " << getMeleeAttackDamage()
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
