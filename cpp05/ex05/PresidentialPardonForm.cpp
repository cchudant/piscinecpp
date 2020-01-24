/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skybt <skybt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 20:35:14 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/04 22:03:42 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string target):
    Form("PresidentialPardonForm", 25, 5), _target(target)
{
}

void PresidentialPardonForm::execute(const Bureaucrat &b) const
{
    checkExecute(b);
    std::cout << _target << " has been pardoned by Zafod Beeblebrox!"
        << std::endl;
}
