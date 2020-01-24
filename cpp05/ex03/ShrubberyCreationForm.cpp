/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 20:35:14 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 00:01:06 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

static std::string TREES =
    "            ,@@@@@@@,\n"
    "    ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
    " ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
    ",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
    "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
    "%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
    "`&%\\ ` /%&'    |.|        \\ '|8'\n"
    "    |o|        | |         | |\n"
    "    |.|        | |         | |\n"
    " \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n";

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
    Form("ShrubberyCreationForm", target, 145, 137)
{
}

void ShrubberyCreationForm::execute(const Bureaucrat &b) const
{
    checkExecute(b);
    std::fstream out;
    out.open((getTarget() + "_shrubbery").c_str(), std::fstream::out);
    out << TREES;
    out.close();
}
