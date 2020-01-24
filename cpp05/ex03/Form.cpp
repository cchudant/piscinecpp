/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 23:33:39 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 00:00:33 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Form::FormNotSignedException

const char *Form::FormNotSignedException::what() const throw()
{
    return "The form was not signed!";
}

// Form::GradeTooHighException

const char *Form::GradeTooHighException::what() const throw()
{
    return "The grade was too high!";
}

// Form::GradeTooLowException

const char *Form::GradeTooLowException::what() const throw()
{
    return "The grade was too low!";
}

// Form

Form::Form(std::string name, std::string target, int grade, int execGrade):
    _name(name), _target(target), _grade(grade),
    _execGrade(execGrade), _signed(false)
{
    if (_grade < 1 || _execGrade < 1)
        throw Form::GradeTooHighException();
    if (_grade > 150 || _execGrade > 150)
        throw Form::GradeTooLowException();
}

void Form::checkExecute(const Bureaucrat &b) const
{
    if (!isSigned())
        throw Form::FormNotSignedException();
    if (b.getGrade() > 45)
        throw Form::GradeTooLowException();
}

const std::string &Form::getName() const
{
    return _name;
}

const std::string &Form::getTarget() const
{
    return _target;
}

int Form::getGrade() const
{
    return _grade;
}

int Form::getExecGrade() const
{
    return _execGrade;
}

bool Form::isSigned() const
{
    return _signed;
}

std::ostream &operator<<(std::ostream &out, const Form &c)
{
    return out << "Form " << c.getName() << ", grade " << c.getGrade() << ", execGrade " << c.getExecGrade();
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > _grade)
        throw Form::GradeTooLowException();
    _signed = true;
}
