/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fork.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 10:01:10 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 02:11:55 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fork.hpp"
#include <iostream>

Fork::Fork(): AWeapon("Fork", 1, 5)
{
}

Fork::~Fork()
{
}

Fork::Fork(const Fork &c):
    AWeapon(c.getName(), c.getAPCost(), c.getDamage())
{
}

Fork &Fork::operator=(const Fork &c)
{
    setName(c.getName());
    setAPCost(c.getAPCost());
    setDamage(c.getDamage());
    return *this;
}

Fork *Fork::clone()
{
    return new Fork(*this);
}

void Fork::attack() const
{
    std::cout << "* stab *" << std::endl;
}
