/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 07:18:52 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/14 07:19:37 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main()
{
    Zombie zb("Berserk", "Andy");
    zb.announce();

    ZombieEvent ze("Programmer");
    Zombie *zb2 = ze.newZombie("Carol");
    zb2->announce();
    delete zb2;

    ze.randomChump();
    ze.randomChump();
    ze.randomChump();
}
