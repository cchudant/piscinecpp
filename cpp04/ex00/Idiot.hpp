/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Idiot.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 09:21:52 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 01:07:22 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDIOT_HPP
# define IDIOT_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Idiot: public Victim
{
    private:
        Idiot();

    public:
        Idiot(std::string name);
        virtual ~Idiot();
        Idiot(const Idiot &c);
        Idiot &operator=(const Idiot &c);

        virtual void getPolymorphed() const;
};

#endif
