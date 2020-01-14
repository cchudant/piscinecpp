/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skybt <skybt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 22:41:28 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/05 00:02:25 by skybt            ###   ########.fr       */
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

Bureaucrat::Bureaucrat(std::string name, int grade):
    _name(name), _grade(grade)
{
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &b):
    _name(b._name), _grade(b._grade)
{
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

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << _name << " signs " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << _name << " cannot sign " << form.getName()
            << " because " << e.what();
    }
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &c)
{
    return out << c.getName() << ", bureaucrat grade " << c.getGrade();
}
