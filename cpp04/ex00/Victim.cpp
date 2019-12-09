/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 08:52:56 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 09:33:24 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include <iostream>

Victim::Victim(std::string name): _name(name)
{
    std::cout << "Some random victim called "
        << _name << " just popped !" << std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim " << _name
        << " just died for no apparent reason !" << std::endl;
}

Victim::Victim(const Victim &c): _name(c._name)
{
    std::cout << "Some random victim called "
        << _name << " just popped !" << std::endl;
}

Victim &Victim::operator=(const Victim &c)
{
    std::cout << "Victim " << _name
        << " just died for no apparent reason !" << std::endl;
    _name = c._name;
    std::cout << "Some random victim called "
        << _name << " just popped !" << std::endl;
    return *this;
}

const std::string &Victim::getName() const
{
    return _name;
}

void Victim::getPolymorphed() const
{
    std::cout << _name
        << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Victim &c)
{
    return out << "I'm " << c.getName()
        << " and I like otters !" << std::endl;
}
