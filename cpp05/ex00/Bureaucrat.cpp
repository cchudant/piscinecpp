/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 22:41:28 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 23:25:58 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Bureaucrat::GradeTooHighException

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &c)
{
    (void)c;
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(const Bureaucrat::GradeTooHighException &c)
{
    (void)c;
    return *this;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "The grade was too high!";
}

// Bureaucrat::GradeTooLowException

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &c)
{
    (void)c;
}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(const Bureaucrat::GradeTooLowException &c)
{
    (void)c;
    return *this;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "The grade was too low!";
}

// Bureaucrat

Bureaucrat::Bureaucrat(std::string name, int grade):
    _name(name), _grade(grade)
{
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &c)
{
    (void)c;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &c)
{
    (void)c;
    return *this;
}

const std::string &Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const
{
    return _grade;
}

void Bureaucrat::incrementGrade()
{
    if (--_grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
    if (++_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &c)
{
    return out << c.getName() << ", bureaucrat grade " << c.getGrade();
}
