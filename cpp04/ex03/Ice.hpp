/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 17:39:37 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 19:21:31 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
    public:
        Ice();
        virtual ~Ice();
        Ice(const Ice &c);
        Ice &operator=(const Ice &c);

        virtual Ice *clone() const;
        virtual void use(ICharacter &target);
};

#endif
