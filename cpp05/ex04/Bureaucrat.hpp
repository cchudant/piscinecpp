/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skybt <skybt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 22:36:46 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/05 00:07:46 by skybt            ###   ########.fr       */
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
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &b);

        class GradeTooHighException: public std::exception
        {
            public:
                virtual char const *what() const throw();
        };

        class GradeTooLowException: public std::exception
        {
            public:
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