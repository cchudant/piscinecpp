/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 22:23:29 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 03:59:29 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

Form *Intern::makeForm(std::string name, std::string target)
{
    if (name == "presidential pardon")
    {
        std::cout << "Intern creates a presidential pardon form!" << std::endl;
        return new PresidentialPardonForm(target);
    }
    if (name == "robotomy request")
    {
        std::cout << "Intern creates a robotomy request form!" << std::endl;
        return new RobotomyRequestForm(target);
    }
    if (name == "shrubbery creation")
    {
        std::cout << "Intern creates a shrubbery creation form!" << std::endl;
        return new ShrubberyCreationForm(target);
    }
    std::cout << "Intern is very confused and don't know what to do." << std::endl;
    return NULL;
}
