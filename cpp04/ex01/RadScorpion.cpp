/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 10:58:19 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 13:25:00 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"
#include <iostream>

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &c): Enemy(c.getHP(), c.getType())
{
}

RadScorpion &RadScorpion::operator=(const RadScorpion &c)
{
    setHP(c.getHP());
    setType(c.getType());
    return *this;
}

void RadScorpion::takeDamage(int damage)
{
    Enemy::takeDamage(damage);
}
