/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tristan.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 08:52:56 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/23 17:11:27 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Tristan.hpp"
#include <iostream>

Tristan::Tristan(std::string name): Victim(name)
{
    std::cout << "I am tristan and I am a victim." << std::endl;
}

Tristan::~Tristan()
{
    std::cout << "I have been proud to live as a victim." << std::endl;
}

Tristan::Tristan(const Tristan &c): Victim(c._name)
{
    std::cout << "I am tristan and I am a victim." << std::endl;
}

Tristan &Tristan::operator=(const Tristan &c)
{
    std::cout << "I have been proud to live as a victim." << std::endl;
    _name = c._name;
    std::cout << "I am tristan and I am a victim." << std::endl;
    return *this;
}

void Tristan::getPolymorphed() const
{
    std::cout << _name
        << " has been turned into a molar !" << std::endl;
}
