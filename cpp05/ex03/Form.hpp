/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 23:29:21 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/28 13:56:20 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string _name;
        const std::string _target;
        const int _grade;
        const int _execGrade;
        bool _signed;

        Form();
        Form &operator=(const Form &c);

    protected:
        void checkExecute(const Bureaucrat &b) const;

    public:
        Form(std::string name, std::string target, int grade, int execGrade);
        virtual ~Form();
        Form(const Form &c);

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

        class FormNotSignedException: public std::exception
        {
            public:
                virtual char const *what() const throw();
        };

        const std::string &getName() const;
        const std::string &getTarget() const;
        int getGrade() const;
        int getExecGrade() const;
        bool isSigned() const;

        void beSigned(Bureaucrat &bureaucrat);

        virtual void execute(const Bureaucrat &b) const = 0;
};

std::ostream &operator<<(std::ostream &out, const Form &c);

#endif
