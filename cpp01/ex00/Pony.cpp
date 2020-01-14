/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 07:13:18 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/14 07:16:08 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

void Pony::trot()
{
    std::cout << "Tagada, tagada" << std::endl;
}

Pony *ponyOnTheHeap()
{
    return new Pony();
}

Pony ponyOnTheStack()
{
    Pony pony;
    return pony;
}
