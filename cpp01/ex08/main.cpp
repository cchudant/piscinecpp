/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 08:05:58 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/14 08:05:59 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main()
{
    Human human;

    human.action("meleeAttack", "you");
    human.action("rangedAttack", "you");
    human.action("intimidatingShout", "you");
}
