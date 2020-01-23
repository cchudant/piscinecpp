/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 13:14:07 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/23 22:34:19 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include <iostream>

int main()
{
    Character *me = new Character("me");
    
    std::cout << *me;
    
    Enemy *b = new RadScorpion();
    
    AWeapon *pr = new PlasmaRifle();
    AWeapon *pf = new PowerFist();

    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;

    delete pr;
    delete pf;

    AWeapon *pr2 = new PlasmaRifle();
    Enemy *b2 = new RadScorpion();

    me->equip(pr2);
    me->attack(b2);
    me->attack(b2);
    me->attack(b2);
    me->attack(b2);
    std::cout << *me;

    Enemy *b3 = new RadScorpion();
    me->attack(b3);
    std::cout << *me;
    me->recoverAP();
    std::cout << *me;
    me->attack(b3);
    me->attack(b3);
    me->recoverAP();
    me->attack(b3);
    me->attack(b3);
    std::cout << *me;

    delete pr2;
    delete me;

    return 0;
}
