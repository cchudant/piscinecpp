/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 10:58:17 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 13:33:24 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant: public Enemy
{
    public:
        SuperMutant();
        virtual ~SuperMutant();
        SuperMutant(const SuperMutant &c);
        SuperMutant &operator=(const SuperMutant &c);

        virtual void takeDamage(int damage);
};

#endif
