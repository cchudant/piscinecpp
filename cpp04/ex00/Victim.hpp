/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 08:55:50 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 09:34:13 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>
# include <iostream>

class Victim
{
    protected:
        std::string _name;

    public:
        Victim(std::string name = "Anonymous");
        ~Victim();
        Victim(const Victim &c);
        Victim &operator=(const Victim &c);

        const std::string &getName() const;

        virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, const Victim &c);

#endif