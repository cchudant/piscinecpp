/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KoalaSteroid.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 21:49:14 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 22:31:02 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "KoalaSteroid.hpp"

Comet::Comet()
{
}

Comet::~Comet()
{
}

Comet::Comet(const Comet &c)
{
    (void)c;
}

Comet &Comet::operator=(const Comet &c)
{
    (void)c;
    return *this;
}

std::string Comet::beMined(DeepCoreMiner *miner) const
{
    (void)miner;
    return "Meium";
}

std::string Comet::beMined(StripMiner *miner) const
{
    (void)miner;
    return "Tartarite";
}

std::string Comet::getName() const
{
    return "Comet";
}
