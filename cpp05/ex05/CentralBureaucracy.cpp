/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 13:12:34 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 04:23:18 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"
#include <cstdlib>
#include <stdio.h>

// CentralBureaucracy::ResumeRejectedException

char const *CentralBureaucracy::ResumeRejectedException::what() const throw()
{
    return "Your resume got rejected.";
}

// CentralBureaucracy::TooMuchWorkException

char const *CentralBureaucracy::TooMuchWorkException::what() const throw()
{
    return "We have too much work! Please try again later.";
}

// CentralBureaucracy::NoOfficeBlockException

char const *CentralBureaucracy::NoOfficeBlockException::what() const throw()
{
    return "We can't find any working office block.";
}

// CentralBureaucracy

CentralBureaucracy::CentralBureaucracy():
    _index(0)
{
    for (int i = 0; i < 20; i++)
    {
        OfficeBlock empty;
        Intern randomIntern;
        _blocks[i] = empty;
        _blocks[i].setIntern(randomIntern);
    }
    for (int i = 0; i < 100; i++)
    {
        std::string empty;
        _targets[i] = empty;
    }
}

void CentralBureaucracy::feed(const Bureaucrat &b)
{
    int i = 0;
    while (i < 20 && _blocks[i].getSigner() && _blocks[i].getExecutor())
        i++;
    if (i == 20)
        throw ResumeRejectedException();
    if (!_blocks[i].getSigner())
        _blocks[i].setSigner(b);
    else
        _blocks[i].setExecutor(b);
}

void CentralBureaucracy::queueUp(std::string target)
{
    int i = 0;
    while (i < 100 && _targets[i].length())
        i++;
    if (i == 100)
        throw TooMuchWorkException();
    _targets[i] = target;
}

OfficeBlock &CentralBureaucracy::nextBlock()
{
    int i = 0;
    while (i < 20 && (!_blocks[_index].getSigner() ||
            !_blocks[_index].getExecutor()))
    {
        _index = (_index + 1) % 20;
        i++;
    }
    if (i == 20)
        throw NoOfficeBlockException();
    return _blocks[_index++];
}

const static std::string FORMS[4] = {
    "presidential pardon",
    "robotomy request",
    "shrubbery creation",
    "mutant pig termination",
};

void CentralBureaucracy::doBureaucracy()
{
    for (int ti = 0; ti < 100; ti++)
    {
        if (_targets[ti].length())
        {
            OfficeBlock &block = nextBlock();
            std::string empty;
            block.doBureaucracy(FORMS[rand() % 3], _targets[ti]);
            _targets[ti] = empty;
        }
    }
}
