/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 22:20:36 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 22:24:01 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"
#include "KoalaSteroid.hpp"
#include "AsteroKreog.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"

int main()
{
    MiningBarge barge;
    Asteroid *asteroid = new Asteroid();
    Comet *comet = new Comet();

    barge.equip(new DeepCoreMiner());
    barge.equip(new DeepCoreMiner());
    barge.equip(new StripMiner());

    barge.mine(asteroid);
    barge.mine(comet);

    barge.equip(new StripMiner());

    barge.mine(asteroid);
    barge.mine(comet);

    delete comet;
    delete asteroid;
}