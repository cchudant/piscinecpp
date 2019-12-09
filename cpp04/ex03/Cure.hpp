/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 17:39:37 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 19:26:58 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
    public:
        Cure();
        virtual ~Cure();
        Cure(const Cure &c);
        Cure &operator=(const Cure &c);

        virtual Cure *clone() const;
        virtual void use(ICharacter &target);
};

#endif
