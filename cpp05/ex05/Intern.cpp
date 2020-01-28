/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 22:23:29 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/28 12:43:02 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "MutantPigTerminationForm.hpp"
#include <iostream>

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &c)
{
    (void)c;
}

Intern &Intern::operator=(const Intern &c)
{
    (void)c;
    return *this;
}

Form *Intern::makeForm(std::string name, std::string target)
{
    Form *form = NULL;

    if (name == "presidential pardon")
        form = new PresidentialPardonForm(target);
    else if (name == "robotomy request")
        form = new RobotomyRequestForm(target);
    else if (name == "shrubbery creation")
        form = new ShrubberyCreationForm(target);
    else if (name == "mutant pig termination")
        form = new MutantPigTerminationForm(target);
    else
    {
        std::cout << "Intern is very confused and don't know what to do." << std::endl;
        return NULL;
    }

    std::string sign = form->isSigned() ? "Signed" : "Unsigned";

    std::cout << "Intrern creates a " << form->getName()
        << " (s.grade " << form->getGrade()
        << ", ex.grade " << form->getExecGrade()
        << ") targeted on " << form->getTarget()
        << " (" << sign
        << ")" << std::endl;

    return form;
}
