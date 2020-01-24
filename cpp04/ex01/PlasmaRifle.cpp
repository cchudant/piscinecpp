/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 10:01:10 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 13:23:51 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include <iostream>

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &c):
    AWeapon(c.getName(), c.getAPCost(), c.getDamage())
{
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &c)
{
    setName(c.getName());
    setAPCost(c.getAPCost());
    setDamage(c.getDamage());
    return *this;
}

PlasmaRifle *PlasmaRifle::clone()
{
    return new PlasmaRifle(*this);
}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
