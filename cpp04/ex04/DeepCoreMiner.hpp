/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 21:33:34 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 22:27:45 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEEPCOREMINER_HPP
# define DEEPCOREMINER_HPP

# include "IMiningLaser.hpp"

class IAsteroid;
class IMiningLaser;

class DeepCoreMiner: public IMiningLaser
{
    public:
        DeepCoreMiner();
        virtual ~DeepCoreMiner();
        DeepCoreMiner(const DeepCoreMiner &c);
        DeepCoreMiner &operator=(DeepCoreMiner &c);

        virtual void mine(IAsteroid *asteroid);
};

#endif
