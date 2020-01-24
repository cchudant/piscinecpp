/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Idiot.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 08:52:56 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 01:11:07 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Idiot.hpp"
#include <iostream>

Idiot::Idiot()
{
}

Idiot::Idiot(std::string name): Victim(name)
{
    std::cout << "Hi, I am an idiot." << std::endl;
}

Idiot::~Idiot()
{
    std::cout << "I am now dead." << std::endl;
}

Idiot::Idiot(const Idiot &c): Victim(c._name)
{
    std::cout << "Hi, I am an idiot." << std::endl;
}

Idiot &Idiot::operator=(const Idiot &c)
{
    std::cout << "I am now dead." << std::endl;
    _name = c._name;
    std::cout << "Hi, I am an idiot." << std::endl;
    return *this;
}

void Idiot::getPolymorphed() const
{
    std::cout << _name
        << " has been turned into a bird !" << std::endl;
}
