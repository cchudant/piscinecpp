/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 20:35:14 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 04:05:19 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string target):
    Form("Robotomy Request Form", target, 72, 45)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(const Bureaucrat &b) const
{
    checkExecute(b);
    std::cout << "Bzzzzzzzz..." << std::endl;
    if (rand() % 2)
        std::cout << getTarget() << " has been robotomized successfully!"
            << std::endl;
    else
        std::cout << getTarget() << " was unfortunately not robotomized."
            << std::endl;
}
