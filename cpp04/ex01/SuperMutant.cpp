/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 10:58:19 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 02:14:38 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include <iostream>

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh ..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &c): Enemy(c.getHP(), c.getType())
{
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &c)
{
    std::cout << "Aaargh ..." << std::endl;
    setHP(c.getHP());
    setType(c.getType());
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
    return *this;
}

void SuperMutant::takeDamage(int damage)
{
    if (damage < 3) damage = 3;
    Enemy::takeDamage(damage - 3);
}
