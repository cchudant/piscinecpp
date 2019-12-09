/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroKreog.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 21:49:14 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 22:30:56 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AsteroKreog.hpp"

Asteroid::Asteroid()
{
}

Asteroid::~Asteroid()
{
}

Asteroid::Asteroid(const Asteroid &c)
{
    (void)c;
}

Asteroid &Asteroid::operator=(const Asteroid &c)
{
    (void)c;
    return *this;
}

std::string Asteroid::beMined(DeepCoreMiner *miner) const
{
    (void)miner;
    return "Dragonite";
}

std::string Asteroid::beMined(StripMiner *miner) const
{
    (void)miner;
    return "Flavium";
}

std::string Asteroid::getName() const
{
    return "Asteroid";
}
