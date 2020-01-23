/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 15:29:25 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/23 23:07:24 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type):
    _type(type), _xp(0)
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria &other):
    _type(other._type), _xp(other._xp)
{
}

AMateria &AMateria::operator=(const AMateria &other)
{
    _type = other._type;
    _xp = other._xp;
    return *this;
}

const std::string &AMateria::getType() const
{
    return _type;
}

void AMateria::use(ICharacter &target)
{
    (void)target;
    _xp += 10;
}
