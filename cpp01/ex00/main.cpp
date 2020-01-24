/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 07:14:47 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/14 07:15:33 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int main()
{
    Pony *onTheHeap = ponyOnTheHeap();
    Pony onTheStack = ponyOnTheStack();

    onTheHeap->trot();
    onTheStack.trot();

    delete onTheHeap;
}
