/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skybt <skybt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 22:55:12 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/04 22:42:37 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <exception>
#include <iostream>

int main()
{
    Intern someRandomIntern;
    Form *rrf;

    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    delete rrf;
    rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
    delete rrf;
    rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
    delete rrf;
    rrf = someRandomIntern.makeForm("coffee", "Bender");
    delete rrf;
}
