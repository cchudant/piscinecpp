/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 22:41:28 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/28 13:55:55 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

// Bureaucrat::GradeTooHighException

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "The grade was too high!";
}

// Bureaucrat::GradeTooLowException

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "The grade was too low!";
}

// Bureaucrat

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &c):
    _name(c._name), _grade(c._grade)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade):
    _name(name), _grade(grade)
{
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
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
    if (_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    _grade--;
}

void Bureaucrat::decrementGrade()
{
    if (_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade++;
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        std::string sign = form.isSigned() ? "Signed" : "Unsigned";

        std::cout << "Bureaucrat " << getName()
            << " (Grade " << getGrade()
            << ") signs a " << form.getName()
            << " (s.grade " << form.getGrade()
            << ", ex.grade " << form.getExecGrade()
            << ") targeted on " << form.getTarget()
            << " (" << sign
            << ")" << std::endl;

        form.beSigned(*this);
    }
    catch (std::exception &e)
    {
        std::cout << _name << " cannot sign " << form.getName()
            << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(const Form &form)
{
    try
    {
        std::string sign = form.isSigned() ? "Signed" : "Unsigned";

        std::cout << "Bureaucrat " << getName()
            << " (Grade " << getGrade()
            << ") executes a " << form.getName()
            << " (s.grade " << form.getGrade()
            << ", ex.grade " << form.getExecGrade()
            << ") targeted on " << form.getTarget()
            << " (" << sign
            << ")" << std::endl;

        form.execute(*this);
    }
    catch (std::exception &e)
    {
        std::cout << _name << " cannot execute " << form.getName()
            << " because " << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &c)
{
    return out << c.getName() << ", bureaucrat grade " << c.getGrade();
}
