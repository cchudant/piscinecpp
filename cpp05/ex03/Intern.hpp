/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 22:18:34 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/28 12:42:54 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"

class Intern
{
    public:
        Intern();
        ~Intern();
        Intern(const Intern &c);
        Intern &operator=(const Intern &c);

        Form *makeForm(std::string name, std::string target);
};

#endif
