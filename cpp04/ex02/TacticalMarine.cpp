/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 14:38:40 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/23 22:46:13 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include <iostream>

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &c)
{
    (void)c;
    std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine &TacticalMarine::operator=(const TacticalMarine &c)
{
    (void)c;
    std::cout << "Aaargh ..." << std::endl;
    std::cout << "Tactical Marine ready for battle" << std::endl;
    return *this;
}

TacticalMarine *TacticalMarine::clone() const
{
    return new TacticalMarine(*this);
}

void TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with chainsword *" << std::endl;
}
