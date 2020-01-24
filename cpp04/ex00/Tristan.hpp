/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tristan.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 09:21:52 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 01:09:03 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRISTAN_HPP
# define TRISTAN_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Tristan: public Victim
{
    private:
        Tristan();

    public:
        Tristan(std::string name);
        virtual ~Tristan();
        Tristan(const Tristan &c);
        Tristan &operator=(const Tristan &c);

        virtual void getPolymorphed() const;
};

#endif
