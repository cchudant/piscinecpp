/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 23:33:39 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 23:50:30 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Form::GradeTooHighException

Form::GradeTooHighException::GradeTooHighException()
{
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
}

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &c)
{
    (void)c;
}

Form::GradeTooHighException &Form::GradeTooHighException::operator=(const Form::GradeTooHighException &c)
{
    (void)c;
    return *this;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "The grade was too high!";
}

// Form::GradeTooLowException

Form::GradeTooLowException::GradeTooLowException()
{
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &c)
{
    (void)c;
}

Form::GradeTooLowException &Form::GradeTooLowException::operator=(const Form::GradeTooLowException &c)
{
    (void)c;
    return *this;
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "The grade was too low!";
}

// Form

Form::Form(std::string name, int grade):
    _name(name), _grade(grade), _signed(false)
{
    if (_grade < 1)
        throw Form::GradeTooHighException();
    if (_grade > 150)
        throw Form::GradeTooLowException();
}

Form::~Form()
{
}

Form::Form(const Form &c):
    _name(c._name), _grade(c._grade), _signed(c._signed)
{
}

Form &Form::operator=(const Form &c)
{
    _name = c._name;
    _grade = c._grade;
    _signed = c._signed;
    return *this;
}

const std::string &Form::getName() const
{
    return _name;
}

int Form::getGrade() const
{
    return _grade;
}

bool Form::isSigned() const
{
    return _signed;
}

std::ostream &operator<<(std::ostream &out, const Form &c)
{
    return out << "Form " << c.getName() << ", grade " << c.getGrade();
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > _grade)
        throw Form::GradeTooLowException();
    _signed = true;
}
