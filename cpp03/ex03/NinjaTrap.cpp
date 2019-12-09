/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 04:21:05 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 05:23:00 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <iostream>

NinjaTrap::NinjaTrap(std::string name):
    ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
    std::cout << "FR4G-TP " << _name << " was born as a ninja." << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    (void)_maxEnergyPoints;
    (void)_level;
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
