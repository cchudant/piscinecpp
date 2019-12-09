/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 21:59:58 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 22:22:30 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"

MiningBarge::MiningBarge()
{
    for (int i = 0; i < 4; i++)
        _inv[i] = NULL;
}

MiningBarge::~MiningBarge()
{
    for (int i = 0; i < 4; i++)
        delete _inv[i];
}

MiningBarge::MiningBarge(const MiningBarge &c)
{
    for (int i = 0; i < 4; i++)
        _inv[i] = c._inv[i];
}

MiningBarge &MiningBarge::operator=(const MiningBarge &c)
{
    for (int i = 0; i < 4; i++)
        delete _inv[i];
    for (int i = 0; i < 4; i++)
        _inv[i] = c._inv[i];
    return *this;
}

void MiningBarge::equip(IMiningLaser *laser)
{
    if (_inv[3])
        return;
    int i = 0;
    while (_inv[i])
        i++;
    _inv[i] = laser;
}

void MiningBarge::mine(IAsteroid *asteroid) const
{
    for (int i = 0; i < 4; i++)
        if (_inv[i])
            _inv[i]->mine(asteroid);
}
