/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 09:21:52 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 01:09:35 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Peon: public Victim
{
    private:
        Peon();

    public:
        Peon(std::string name = "Anonymous");
        virtual ~Peon();
        Peon(const Peon &c);
        Peon &operator=(const Peon &c);

        virtual void getPolymorphed() const;
};

#endif
