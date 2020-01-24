/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantPigTerminationForm.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 20:35:14 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 04:05:48 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantPigTerminationForm.hpp"
#include <iostream>

MutantPigTerminationForm::MutantPigTerminationForm(std::string target):
    Form("Mutant Pig Termination Form", target, 130, 50)
{
}

MutantPigTerminationForm::~MutantPigTerminationForm()
{
}

void MutantPigTerminationForm::execute(const Bureaucrat &b) const
{
    checkExecute(b);
    std::cout << "That'll do, " << getTarget() << ". That'll do ..."
        << std::endl;
}
