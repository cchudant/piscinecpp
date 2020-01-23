/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 08:17:06 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/23 16:54:37 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer(std::string name, std::string title):
    _name(name), _title(title)
{
    std::cout << _name << ", "
        << _title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &c):
    _name(c._name), _title(c._title)
{
    std::cout << _name << ", "
        << _title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << _name << ", "
        << _title << ", is dead. Consequences will never be the same !"
        << std::endl;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &c)
{
    std::cout << _name << ", "
        << _title << ", is dead. Consequences will never be the same !"
        << std::endl;
    _name = c._name;
    _title = c._title;
    std::cout << _name << ", "
        << _title << ", is born !" << std::endl;
    return *this;
}

const std::string &Sorcerer::getName() const
{
    return _name;
}

const std::string &Sorcerer::getTitle() const
{
    return _title;
}

void Sorcerer::polymorph(Victim const &c) const
{
    c.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, const Sorcerer &s)
{
    return out << "I am " << s.getName() << ", "
        << s.getTitle() << ", and I like ponies !"
        << std::endl;
}