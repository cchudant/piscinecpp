/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 21:33:34 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 22:29:22 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRIPMINER_HPP
# define STRIPMINER_HPP

# include "IMiningLaser.hpp"

class StripMiner: public IMiningLaser
{
    public:
        StripMiner();
        virtual ~StripMiner();
        StripMiner(const StripMiner &c);
        StripMiner &operator=(StripMiner &c);

        virtual void mine(IAsteroid *asteroid);
};

#endif
