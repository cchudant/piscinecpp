/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 22:36:46 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 23:46:18 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <exception>
# include <iostream>

class Form;

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;

    public:
        Bureaucrat(std::string name = "None", int grade = 150);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &c);
        Bureaucrat &operator=(const Bureaucrat &c);

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

        void incrementGrade();
        void decrementGrade();

        void signForm(Form &form);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &c);

#endif
