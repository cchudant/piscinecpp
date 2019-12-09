/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 04:21:05 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 07:21:11 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <iostream>

NinjaTrap::NinjaTrap(std::string name):
    ClapTrap(name, this->baseHitPoints(), this->baseEnergyPoints())
{
    std::cout << "FR4G-TP " << _name << " was born as a ninja." << std::endl;
}

NinjaTrap::NinjaTrap(std::string name, int hitPoints, int energyPoints):
    ClapTrap(name, hitPoints, energyPoints)
{
    std::cout << "FR4G-TP " << _name << " was born as a ninja." << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "FR4G-TP " << _name << " died in a ninja tornado." << std::endl;
}

void NinjaTrap::ninjaShoebox(const FragTrap &target)
{
    if (_energyPoints < 30)
    {
        std::cout << "FR4G-TP " << _name
            << " cannot ninja shoebox " << target.get_name()
            << " because it is out of energy!" << std::endl;
        return;
    }

    _energyPoints -= 30;
    std::cout << "FR4G-TP " << _name
        << " attacks " << target.get_name()
        << " with a ninja turtle puppet!" << std::endl;
}

void NinjaTrap::ninjaShoebox(const ScavTrap &target)
{
    if (_energyPoints < 30)
    {
        std::cout << "FR4G-TP " << _name
            << " cannot ninja shoebox " << target.get_name()
            << " because it is out of energy!" << std::endl;
        return;
    }

    _energyPoints -= 30;
    std::cout << "FR4G-TP " << _name
        << " attacks " << target.get_name()
        << " with a ninja turtle puppet!" << std::endl;
}

void NinjaTrap::ninjaShoebox(const NinjaTrap &target)
{
    if (_energyPoints < 30)
    {
        std::cout << "FR4G-TP " << _name
            << " cannot ninja shoebox " << target.get_name()
            << " because it is out of energy!" << std::endl;
        return;
    }

    _energyPoints -= 30;
    std::cout << "FR4G-TP " << _name
        << " attacks " << target.get_name()
        << " with a ninja turtle puppet!" << std::endl;
}

// base attributes

int NinjaTrap::baseHitPoints()
{
    return 60;
}

int NinjaTrap::maxHitPoints()
{
    return 60;
}

int NinjaTrap::baseEnergyPoints()
{
    return 120;
}

int NinjaTrap::maxEnergyPoints()
{
    return 120;
}

int NinjaTrap::level()
{
    return 1;
}

int NinjaTrap::meleeAttackDamage()
{
    return 60;
}

int NinjaTrap::rangedAttackDamage()
{
    return 5;
}

int NinjaTrap::armorAttackReduction()
{
    return 0;
}
