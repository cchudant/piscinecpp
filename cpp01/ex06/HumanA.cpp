/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 07:54:09 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/20 23:11:24 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon)
{
}

void HumanA::setName(std::string name)
{
    this->name = name;
}

void HumanA::setWeapon(Weapon &weapon)
{
    this->weapon = weapon;
}

std::string HumanA::getName() const
{
    return name;
}

void HumanA::attack() const
{
    std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}
