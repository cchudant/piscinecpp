/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skybt <skybt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 22:18:34 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/05 00:08:23 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern &b);

        Form *makeForm(std::string name, std::string target);
};

#endif
