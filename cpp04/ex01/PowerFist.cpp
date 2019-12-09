/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 10:01:10 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 13:29:13 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include <iostream>

PowerFist::PowerFist(): AWeapon("Power fist", 8, 50)
{
}

PowerFist::~PowerFist()
{
}

PowerFist::PowerFist(const PowerFist &c):
    AWeapon(c.getName(), c.getAPCost(), c.getDamage())
{
}

PowerFist &PowerFist::operator=(const PowerFist &c)
{
    setName(c.getName());
    setAPCost(c.getAPCost());
    setDamage(c.getDamage());
    return *this;
}

PowerFist *PowerFist::clone()
{
    return new PowerFist(*this);
}

void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}