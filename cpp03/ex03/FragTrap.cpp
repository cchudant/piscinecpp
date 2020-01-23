/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 03:11:07 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/23 14:27:41 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name):
    ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5)
{
    std::cout << "FR4G-TP " << getName() << " was created." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FR4G-TP " << getName() << " was destroyed." << std::endl;
}

void FragTrap::rangedAttack(const std::string &target) const
{
    std::cout << "FR4G-TP " << getName()
        << " attacks " << target
        << " at range, causing " << getRangedAttackDamage()
        << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(const std::string &target) const
{
    std::cout << "FR4G-TP " << getName()
        << " attacks " << target
        << " at melee, causing " << getMeleeAttackDamage()
        << " points of damage!" << std::endl;
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
    if (getEnergyPoints() < 25)
    {
        std::cout << "FR4G-TP " << getName()
            << " cannot attack " << target
            << " because it is out of energy!" << std::endl;
        return;
    }

    setEnergyPoints(getEnergyPoints() - 25);
    std::string attack = FUNNY_ATTACKS[rand() % 5];
    std::cout << "FR4G-TP " << getName()
        << " attacks " << target
        << ": \"" << attack
        << "\"" << std::endl;
}
