/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 10:58:17 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 13:22:31 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion: public Enemy
{
    public:
        RadScorpion();
        virtual ~RadScorpion();
        RadScorpion(const RadScorpion &c);
        RadScorpion &operator=(const RadScorpion &c);

        virtual void takeDamage(int damage);
};

#endif