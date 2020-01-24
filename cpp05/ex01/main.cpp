/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 22:55:12 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/23 23:35:54 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>
#include <iostream>

int main()
{
    std::cout << "1." << std::endl;
    try
    {
        Bureaucrat b1("Johnny", 1);
        Bureaucrat b2("Johnny", 150);
        b1.decrementGrade();
        b2.incrementGrade();
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

    std::cout << "6." << std::endl;
    try
    {
        Bureaucrat b1("Johnny", 150);
        Form f1("Formulaire", 150, 5);
        b1.signForm(f1);
        std::cout << "Success: " << b1 << " " << f1 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "7." << std::endl;
    try
    {
        Bureaucrat b1("Johnny", 160);
        Form f1("Formulaire", 150, 5);
        b1.signForm(f1);
        std::cout << "Success: " << b1 << " " << f1 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "8." << std::endl;
    try
    {
        Bureaucrat b1("Johnny", 150);
        Form f1("Formulaire", 150, 5);
        b1.signForm(f1);
        Form f2("Formulaire", 149, 5);
        b1.signForm(f2);
        std::cout << "Success: " << b1 << " " << f1 << " " << f2 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "9." << std::endl;
    try
    {
        Bureaucrat b1("Johnny", 160);
        Form f1("Formulaire", 150, 5);
        f1.beSigned(b1);
        std::cout << "Success: " << b1 << " " << f1 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}
