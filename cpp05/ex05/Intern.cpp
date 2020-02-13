/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 22:23:29 by cchudant          #+#    #+#             */
/*   Updated: 2020/02/13 06:28:27 by cchudant         ###   ########.fr       */
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

Form *Intern::createPresidentialPardonForm(std::string target)
{
    return new PresidentialPardonForm(target);
}

Form *Intern::createRobotomyRequestForm(std::string target)
{
    return new RobotomyRequestForm(target);
}

Form *Intern::createShrubberyCreationForm(std::string target)
{
    return new ShrubberyCreationForm(target);
}

Form *Intern::createMutantPigTerminationForm(std::string target)
{
    return new MutantPigTerminationForm(target);
}

const Intern::vtab_entry Intern::vtab[4] =
{
    { .name = "presidential pardon", .fn = &Intern::createPresidentialPardonForm },
    { .name = "robotomy request", .fn = &Intern::createRobotomyRequestForm },
    { .name = "shrubbery creation", .fn = &Intern::createShrubberyCreationForm },
    { .name = "mutant pig termination", .fn = &Intern::createMutantPigTerminationForm },
};

Form *Intern::makeForm(std::string name, std::string target)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (vtab[i].name == name)
        {
            std::cout << "Intern creates a " << name << " form!" << std::endl;
            return vtab[i].fn(target);
        }
    }
    std::cout << "Intern is very confused and don't know what to do." << std::endl;
    return NULL;
}
