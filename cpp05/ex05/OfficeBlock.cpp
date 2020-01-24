/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 23:04:17 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 04:11:59 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

// OfficeBlock::NoInternException

const char *OfficeBlock::NoInternException::what() const throw()
{
    return "There was no intern in the office block!";
}

// OfficeBlock::NoSigningBureaucratException

const char *OfficeBlock::NoSigningBureaucratException::what() const throw()
{
    return "The signing bureaucrat is nowhere to be found!";
}

// OfficeBlock::NoExecutingBureaucratException

const char *OfficeBlock::NoExecutingBureaucratException::what() const throw()
{
    return "The executing bureaucrat is nowhere to be found!";
}

// OfficeBlock::InternConfusedException

const char *OfficeBlock::InternConfusedException::what() const throw()
{
    return "The intern did not do his job.";
}

// OfficeBlock

OfficeBlock::OfficeBlock(const Intern &intern, const Bureaucrat &signing,
        const Bureaucrat &executing):
    _intern(new Intern(intern)), _signing(new Bureaucrat(signing)), _executing(new Bureaucrat(executing))
{
}

OfficeBlock::OfficeBlock():
    _intern(NULL), _signing(NULL), _executing(NULL)
{
}

OfficeBlock::~OfficeBlock()
{
    delete _intern;
    delete _signing;
    delete _executing;
}

void OfficeBlock::setIntern(const Intern &intern)
{
    _intern = new Intern(intern);
}

void OfficeBlock::setSigner(const Bureaucrat &signer)
{
    _signing = new Bureaucrat(signer);
}

void OfficeBlock::setExecutor(const Bureaucrat &executer)
{
    _executing = new Bureaucrat(executer);
}

const Intern *OfficeBlock::getIntern() const
{
    return _intern;
}

const Bureaucrat *OfficeBlock::getSigner() const
{
    return _signing;
}

const Bureaucrat *OfficeBlock::getExecutor() const
{
    return _executing;
}

void OfficeBlock::doBureaucracy(std::string formName, std::string target) const
{
    if (!_intern)
        throw OfficeBlock::NoInternException();
    Form *form = _intern->makeForm(formName, target);
    if (!form)
        throw OfficeBlock::InternConfusedException();
    if (!_signing)
        throw OfficeBlock::NoSigningBureaucratException();
    _signing->signForm(*form);
    if (!_executing)
        throw OfficeBlock::NoExecutingBureaucratException();
    _executing->executeForm(*form);
    delete form;
}
