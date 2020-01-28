/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 20:35:14 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/28 14:02:40 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &c):
    Form(c)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
    Form("Presidential Pardon Form", target, 25, 5)
{
}

void PresidentialPardonForm::execute(const Bureaucrat &b) const
{
    checkExecute(b);
    std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox!"
        << std::endl;
}
