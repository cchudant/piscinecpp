/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 04:21:05 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 07:36:00 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include <iostream>

SuperTrap::SuperTrap(std::string name):
    NinjaTrap(name, this->baseHitPoints(), this->maxEnergyPoints()),
    FragTrap(name, this->baseHitPoints(), this->maxEnergyPoints())
{
    std::cout << "FR4G-TP " << NinjaTrap::_name << " is a super trap!!" << std::endl;
}

SuperTrap::SuperTrap(std::string name, int hitPoints, int energyPoints):
    NinjaTrap(name, hitPoints, energyPoints), FragTrap(name, hitPoints, energyPoints)
{
    std::cout << "FR4G-TP " << NinjaTrap::_name << " is a super trap!!" << std::endl;
}

SuperTrap::~SuperTrap()
{
    std::cout << "FR4G-TP " << NinjaTrap::_name << " is not a super trap anymore!" << std::endl;
}

// base attributes

int SuperTrap::baseHitPoints()
{
    return FragTrap::baseHitPoints();
}

int SuperTrap::maxHitPoints()
{
    return FragTrap::maxHitPoints();
}

int SuperTrap::baseEnergyPoints()
{
    return NinjaTrap::baseEnergyPoints();
}

int SuperTrap::maxEnergyPoints()
{
    return NinjaTrap::maxEnergyPoints();
}

int SuperTrap::level()
{
    return 1;
}

int SuperTrap::meleeAttackDamage()
{
    return NinjaTrap::meleeAttackDamage();
}

int SuperTrap::rangedAttackDamage()
{
    return FragTrap::rangedAttackDamage();
}

int SuperTrap::armorAttackReduction()
{
    return FragTrap::armorAttackReduction();
}

void SuperTrap::rangedAttack(const std::string &target)
{
    FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(const std::string &target)
{
    NinjaTrap::meleeAttack(target);
}

void SuperTrap::takeDamage(unsigned int amount)
{
    FragTrap::takeDamage(amount);
}

void SuperTrap::beRepaired(unsigned int amount)
{
    FragTrap::beRepaired(amount);
}