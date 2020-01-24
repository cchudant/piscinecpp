/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 20:35:14 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 00:00:47 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string target):
    Form("PresidentialPardonForm", target, 25, 5)
{
}

void PresidentialPardonForm::execute(const Bureaucrat &b) const
{
    checkExecute(b);
    std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox!"
        << std::endl;
}
