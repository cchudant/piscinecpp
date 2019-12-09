/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 03:11:07 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 04:48:59 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    _hitPoints = 100;
    _maxHitPoints = 100;
    _energyPoints = 100;
    _maxEnergyPoints = 100;
    _level = 1;
    _meleeAttackDamage = 30;
    _rangedAttackDamage = 20;
    _armorAttackReduction = 5;
    std::cout << "FR4G-TP " << _name << " was created." << std::endl;
}

FragTrap::~FragTrap()
{
    (void)_maxEnergyPoints;
    (void)_level;
    std::cout << "FR4G-TP " << _name << " was destroyed." << std::endl;
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
