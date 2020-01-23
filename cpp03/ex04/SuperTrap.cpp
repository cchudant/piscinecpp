/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 04:21:05 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/23 15:19:36 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include <iostream>

SuperTrap::SuperTrap(std::string name):
    ClapTrap(name, baseHitPoints(), baseEnergyPoints()), NinjaTrap(name), FragTrap(name)
{
    std::cout << "SUPER-TP " << getName() << " is a super trap!!" << std::endl;
}

SuperTrap::~SuperTrap()
{
    std::cout << "SUPER-TP " << getName() << " is not a super trap anymore!" << std::endl;
}

void SuperTrap::rangedAttack(const std::string &target) const
{
    FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(const std::string &target) const
{
    NinjaTrap::meleeAttack(target);
}

// base attributes

int SuperTrap::baseHitPoints() const
{
    return FragTrap::baseHitPoints();
}

int SuperTrap::maxHitPoints() const
{
    return FragTrap::maxHitPoints();
}

int SuperTrap::baseEnergyPoints() const
{
    return NinjaTrap::baseEnergyPoints();
}

int SuperTrap::maxEnergyPoints() const
{
    return NinjaTrap::maxEnergyPoints();
}

int SuperTrap::level() const
{
    return 1;
}

int SuperTrap::meleeAttackDamage() const
{
    return NinjaTrap::meleeAttackDamage();
}

int SuperTrap::rangedAttackDamage() const
{
    return FragTrap::rangedAttackDamage();
}

int SuperTrap::armorAttackReduction() const
{
    return FragTrap::armorAttackReduction();
}
