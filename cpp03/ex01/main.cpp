/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 04:21:26 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 04:29:15 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    {
        FragTrap ft("unicorn");

        ft.rangedAttack("your whole family");
        ft.meleeAttack("your whole family");
        ft.takeDamage(42);
        ft.beRepaired(42);

        ft.vaulthunter_dot_exe("your whole family");
        ft.vaulthunter_dot_exe("your whole family");
        ft.vaulthunter_dot_exe("your whole family");
        ft.vaulthunter_dot_exe("your whole family");
        ft.vaulthunter_dot_exe("your whole family");
        ft.vaulthunter_dot_exe("your whole family");
        ft.vaulthunter_dot_exe("your whole family");
        ft.vaulthunter_dot_exe("your whole family");
    }
    {
        ScavTrap ft("unicorn");

        ft.rangedAttack("your whole family");
        ft.meleeAttack("your whole family");
        ft.takeDamage(42);
        ft.beRepaired(42);

        ft.challengeNewcomer("your whole family");
        ft.challengeNewcomer("your whole family");
        ft.challengeNewcomer("your whole family");
        ft.challengeNewcomer("your whole family");
        ft.challengeNewcomer("your whole family");
        ft.challengeNewcomer("your whole family");
        ft.challengeNewcomer("your whole family");
        ft.challengeNewcomer("your whole family");
    }
    return 0;
}
