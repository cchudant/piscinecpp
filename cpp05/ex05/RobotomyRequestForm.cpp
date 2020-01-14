/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skybt <skybt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 20:35:14 by skybt             #+#    #+#             */
/*   Updated: 2020/01/05 14:07:22 by skybt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string target):
    Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

void RobotomyRequestForm::execute(const Bureaucrat &b) const
{
    checkExecute(b);
    std::cout << "Bzzzzzzzz..." << std::endl;
    if (rand() % 2)
        std::cout << _target << " has been robotomized successfully!"
            << std::endl;
    else
        std::cout << _target << " was unfortunately not robotomized."
            << std::endl;
}
