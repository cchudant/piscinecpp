/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 15:29:25 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 21:07:15 by cchudant         ###   ########.fr       */
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

const std::string &AMateria::getType() const
{
    return _type;
}

void AMateria::use(ICharacter &target)
{
    (void)target;
    _xp += 10;
}
