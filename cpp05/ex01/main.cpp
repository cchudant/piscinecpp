/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 22:55:12 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 23:26:16 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>

int main()
{
    std::cout << "1." << std::endl;
    try
    {
        Bureaucrat b1("Johnny", 1);
        Bureaucrat b2("Johnny", 150);
        std::cout << "Success: " << b1 << "; " << b2 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "2." << std::endl;
    try
    {
        Bureaucrat b1("Johnny", 0);
        std::cout << "Success: " << b1 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "3." << std::endl;
    try
    {
        Bureaucrat b1("Johnny", 200);
        std::cout << "Success: " << b1 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "4." << std::endl;
    try
    {
        Bureaucrat b1("Johnny", 2);
        b1.incrementGrade();
        b1.decrementGrade();
        b1.incrementGrade();
        b1.incrementGrade();
        std::cout << "Success: " << b1 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "5." << std::endl;
    try
    {
        Bureaucrat b1("Johnny", 150);
        b1.decrementGrade();
        std::cout << "Success: " << b1 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}