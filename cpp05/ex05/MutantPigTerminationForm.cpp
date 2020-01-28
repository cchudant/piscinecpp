/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantPigTerminationForm.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 20:35:14 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/28 14:02:15 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantPigTerminationForm.hpp"
#include <iostream>

MutantPigTerminationForm::~MutantPigTerminationForm()
{
}

MutantPigTerminationForm::MutantPigTerminationForm(const MutantPigTerminationForm &c):
    Form(c)
{
}

MutantPigTerminationForm::MutantPigTerminationForm(std::string target):
    Form("Mutant Pig Termination Form", target, 130, 50)
{
}

void MutantPigTerminationForm::execute(const Bureaucrat &b) const
{
    checkExecute(b);
    std::cout << "That'll do, " << getTarget() << ". That'll do ..."
        << std::endl;
}
