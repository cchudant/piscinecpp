/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 17:45:00 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/23 23:11:28 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure(): AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(const Cure &c): AMateria("cure")
{
    (void)c;
}

Cure &Cure::operator=(const Cure &c)
{
    (void)c;
    return *this;
}

Cure *Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
    AMateria::use(target);
    std::cout << "* heals " << target.getName()
        << "'s wounds *" << std::endl;
}
