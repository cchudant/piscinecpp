/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 14:55:13 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/23 22:55:24 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include <iostream>

int main()
{
    ISpaceMarine *bob = new TacticalMarine();
    ISpaceMarine *jim = new AssaultTerminator();
    
    Squad *vlc = new Squad();
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine *cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

    ISquad *vlc2 = new Squad(*vlc);
    delete vlc;

    std::cout << vlc2->push(new TacticalMarine()) << std::endl;
    std::cout << vlc2->push(new AssaultTerminator()) << std::endl;
    std::cout << vlc2->push(new TacticalMarine()) << std::endl;
    std::cout << vlc2->push(new AssaultTerminator()) << std::endl;

    std::cout << (vlc2->getUnit(1) == jim) << std::endl;
    std::cout << vlc2->getUnit(99) << std::endl;

    for (int i = 0; i < vlc2->getCount(); ++i)
    {
        ISpaceMarine *cur = vlc2->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

    delete vlc2;
    return 0;
}