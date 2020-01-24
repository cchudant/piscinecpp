/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 22:55:12 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 04:21:06 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"
#include <exception>
#include <iostream>
#include <sstream>

int main()
{
    CentralBureaucracy b = CentralBureaucracy();
    b.feed(Bureaucrat("RandomGuy0", 60));
    b.feed(Bureaucrat("RandomGuy1", 80));
    b.feed(Bureaucrat("RandomGuy2", 20));
    b.feed(Bureaucrat("RandomGuy3", 80));
    b.feed(Bureaucrat("RandomGuy4", 100));
    b.feed(Bureaucrat("RandomGuy5", 150));
    b.feed(Bureaucrat("RandomGuy6", 30));
    b.feed(Bureaucrat("RandomGuy7", 20));
    b.feed(Bureaucrat("RandomGuy8", 50));
    b.feed(Bureaucrat("RandomGuy9", 10));
    b.feed(Bureaucrat("RandomGuy10", 1));
    b.feed(Bureaucrat("RandomGuy11", 5));
    b.feed(Bureaucrat("RandomGuy12", 70));
    b.feed(Bureaucrat("RandomGuy13", 56));
    b.feed(Bureaucrat("RandomGuy14", 5));
    b.feed(Bureaucrat("RandomGuy15", 12));
    b.feed(Bureaucrat("RandomGuy16", 24));
    b.feed(Bureaucrat("RandomGuy17", 4));
    b.feed(Bureaucrat("RandomGuy18", 57));
    b.feed(Bureaucrat("RandomGuy19", 58));
    for (int i = 0; i < 100; i++)
    {
        std::stringstream ss;
        ss << "Target" << i;
        b.queueUp(ss.str());
    }
    b.doBureaucracy();

    return 0;
}
