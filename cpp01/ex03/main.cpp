/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 07:18:52 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/14 07:38:06 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int main()
{
    Zombie zb("Berserk", "Andy");
    zb.announce();

    ZombieHorde horde(5);
    horde.announce();
}
