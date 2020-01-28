/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 23:33:39 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/28 11:54:05 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

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

Form::Form():
    _grade(-1), _execGrade(-1)
{
}

Form::~Form()
{
}

Form::Form(const Form &c):
    _name(c._name), _grade(c._grade), _execGrade(c._execGrade), _signed(c._signed)
{
}

Form &Form::operator=(const Form &c)
{
    const_cast<std::string &> (_name) = c._name;
    const_cast<int &> (_grade) = c._grade;
    const_cast<int &> (_execGrade) = c._execGrade;
    _signed = c._signed;
    return *this;
}

Form::Form(std::string name, int grade, int execGrade):
    _name(name), _grade(grade), _execGrade(execGrade), _signed(false)
{
    if (_grade < 1 || _execGrade < 1)
        throw Form::GradeTooHighException();
    if (_grade > 150 || _execGrade > 150)
        throw Form::GradeTooLowException();
}

const std::string &Form::getName() const
{
    return _name;
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
    return out << "Form " << c.getName() << ", grade " << c.getGrade();
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > _grade)
        throw Form::GradeTooLowException();
    _signed = true;
}
