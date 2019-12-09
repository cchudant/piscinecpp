/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 21:32:49 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 22:28:32 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StripMiner.hpp"
#include "IAsteroid.hpp"
#include <iostream>

StripMiner::StripMiner()
{
}

StripMiner::~StripMiner()
{
}

StripMiner::StripMiner(const StripMiner &c)
{
    (void)c;
}

StripMiner &StripMiner::operator=(StripMiner &c)
{
    (void)c;
    return *this;
}

void StripMiner::mine(IAsteroid *asteroid)
{
    std::cout << "* strip mining ... got "
        << asteroid->beMined(this) << " ! *" << std::endl;
}
