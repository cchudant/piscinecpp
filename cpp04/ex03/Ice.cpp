/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 17:45:00 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 21:12:56 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice(): AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(const Ice &c): AMateria("ice")
{
    (void)c;
}

Ice &Ice::operator=(const Ice &c)
{
    (void)c;
    return *this;
}

Ice *Ice::clone() const
{
    return new Ice();
}

void Ice::use(ICharacter &target)
{
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at "
        << target.getName() << " *" << std::endl;
}
