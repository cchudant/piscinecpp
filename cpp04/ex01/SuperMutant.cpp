/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 10:58:19 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 13:24:37 by cchudant         ###   ########.fr       */
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
}

SuperMutant &SuperMutant::operator=(const SuperMutant &c)
{
    setHP(c.getHP());
    setType(c.getType());
    return *this;
}

void SuperMutant::takeDamage(int damage)
{
    Enemy::takeDamage(damage - 3);
}
