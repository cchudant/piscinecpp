/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 04:21:26 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 05:08:29 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
    FragTrap frag("frag");

    frag.rangedAttack("your whole family");
    frag.meleeAttack("your whole family");
    frag.takeDamage(42);
    frag.beRepaired(42);

    frag.vaulthunter_dot_exe("your whole family");
    frag.vaulthunter_dot_exe("your whole family");
    frag.vaulthunter_dot_exe("your whole family");
    frag.vaulthunter_dot_exe("your whole family");
    frag.vaulthunter_dot_exe("your whole family");
    frag.vaulthunter_dot_exe("your whole family");
    frag.vaulthunter_dot_exe("your whole family");
    frag.vaulthunter_dot_exe("your whole family");

    ScavTrap scav("scav");

    scav.rangedAttack("your whole family");
    scav.meleeAttack("your whole family");
    scav.takeDamage(42);
    scav.beRepaired(42);

    scav.challengeNewcomer("your whole family");
    scav.challengeNewcomer("your whole family");
    scav.challengeNewcomer("your whole family");
    scav.challengeNewcomer("your whole family");
    scav.challengeNewcomer("your whole family");
    scav.challengeNewcomer("your whole family");
    scav.challengeNewcomer("your whole family");
    scav.challengeNewcomer("your whole family");

    NinjaTrap ninja("ninja");

    ninja.rangedAttack("your whole family");
    ninja.meleeAttack("your whole family");
    ninja.takeDamage(42);
    ninja.beRepaired(42);

    ninja.ninjaShoebox(frag);
    ninja.ninjaShoebox(scav);
    ninja.ninjaShoebox(ninja);
    ninja.ninjaShoebox(frag);
    ninja.ninjaShoebox(scav);
    ninja.ninjaShoebox(ninja);
    ninja.ninjaShoebox(frag);
    ninja.ninjaShoebox(scav);
    ninja.ninjaShoebox(ninja);

    return 0;
}