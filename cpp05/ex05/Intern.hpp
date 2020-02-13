/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 22:18:34 by cchudant          #+#    #+#             */
/*   Updated: 2020/02/13 06:27:20 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"

class Intern
{
    private:
        static Form *createPresidentialPardonForm(std::string target);
        static Form *createRobotomyRequestForm(std::string target);
        static Form *createShrubberyCreationForm(std::string target);
        static Form *createMutantPigTerminationForm(std::string target);

        struct vtab_entry
        {
            std::string name;
            Form *(*fn)(std::string target);
        };
        static const vtab_entry vtab[4];

    public:
        Intern();
        ~Intern();
        Intern(const Intern &c);
        Intern &operator=(const Intern &c);

        Form *makeForm(std::string name, std::string target);
};

#endif
