/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 14:38:40 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/23 22:47:43 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include <iostream>

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I'll be back ..." << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &c)
{
    (void)c;
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator &c)
{
    (void)c;
    std::cout << "I'll be back ..." << std::endl;
    std::cout << "* teleports from space *" << std::endl;
    return *this;
}

AssaultTerminator *AssaultTerminator::clone() const
{
    return new AssaultTerminator(*this);
}

void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *" << std::endl;
}
