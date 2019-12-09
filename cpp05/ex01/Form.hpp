/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 23:29:21 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 23:42:50 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string _name;
        bool _signed;
        const int _grade;

    public:
        Form(std::string name = "None", int grade = 150);
        ~Form();
        Form(const Form &c);
        Form &operator=(const Form &c);

        class GradeTooHighException: public std::exception
        {
            public:
                GradeTooHighException();
                virtual ~GradeTooHighException() throw();
                GradeTooHighException(const GradeTooHighException &c);
                GradeTooHighException &operator=(const GradeTooHighException &c);

                virtual char const *what() const throw();
        };

        class GradeTooLowException: public std::exception
        {
            public:
                GradeTooLowException();
                virtual ~GradeTooLowException() throw();
                GradeTooLowException(const GradeTooLowException &c);
                GradeTooLowException &operator=(const GradeTooLowException &c);
    
                virtual char const *what() const throw();
        };

        const std::string &getName() const;
        int getGrade() const;
        bool isSigned() const;

        void Form::beSigned(Bureaucrat &bureaucrat);
};

std::ostream &operator<<(std::ostream &out, const Form &c);

#endif