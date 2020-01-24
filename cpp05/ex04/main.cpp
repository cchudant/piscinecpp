/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 22:55:12 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 03:50:08 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"
#include <exception>
#include <iostream>

int main()
{
    Intern idiotOne;
    Bureaucrat hermes = Bureaucrat("Hermes Conrad", 37);
    Bureaucrat bob = Bureaucrat("Bobby Bobson", 123);
    OfficeBlock ob;

    ob.setIntern(idiotOne);
    ob.setSigner(bob);
    ob.setExecutor(hermes);

    try
    {
        ob.doBureaucracy("mutant pig termination", "Pigley");
    }
    catch (OfficeBlock::InternConfusedException &e)
    {
        std::cout << "InternConfusedException: " << e.what() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
