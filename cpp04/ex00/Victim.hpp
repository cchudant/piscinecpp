/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 08:55:50 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 01:11:26 by cchudant         ###   ########.fr       */
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

        Victim();

    public:
        Victim(std::string name);
        virtual ~Victim();
        Victim(const Victim &c);
        Victim &operator=(const Victim &c);

        const std::string &getName() const;

        virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, const Victim &c);

#endif
