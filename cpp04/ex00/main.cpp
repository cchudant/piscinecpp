/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 09:31:34 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/23 17:13:35 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Idiot.hpp"
#include "Tristan.hpp"

int main()
{
    {
        Sorcerer robert("Robert", "the Magnificent");
        
        Victim jim("Jimmy");
        Peon joe("Joe");
        
        std::cout << robert << jim << joe;
        
        robert.polymorph(jim);
        robert.polymorph(joe);
    }
    {
        Sorcerer uther("Uther", "the Lightbringer");
        
        Idiot richard("Richard");
        Tristan tristan("Tristan");
        
        std::cout << uther << richard << tristan;
        
        uther.polymorph(richard);
        uther.polymorph(tristan);
    }
    return 0;
}