/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 08:52:56 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 01:10:51 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include <iostream>

Peon::Peon()
{
}

Peon::Peon(std::string name): Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const Peon &c): Victim(c._name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon &Peon::operator=(const Peon &c)
{
    std::cout << "Bleuark..." << std::endl;
    _name = c._name;
    std::cout << "Zog zog." << std::endl;
    return *this;
}

void Peon::getPolymorphed() const
{
    std::cout << _name
        << " has been turned into a pink pony !" << std::endl;
}
