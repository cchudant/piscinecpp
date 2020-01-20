/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 07:53:33 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/20 23:11:41 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon(NULL)
{
}

void HumanB::setName(std::string name)
{
    this->name = name;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

std::string HumanB::getName() const
{
    return name;
}

void HumanB::attack() const
{
    if (!weapon)
    {
        std::cout << name << " attacks with nothing" << std::endl;
        return;
    }
    std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}
