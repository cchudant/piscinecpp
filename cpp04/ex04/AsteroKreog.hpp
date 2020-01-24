/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroKreog.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 21:31:01 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 21:55:16 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASTEROKREOG_HPP
# define ASTEROKREOG_HPP

# include "IAsteroid.hpp"

class Asteroid: public IAsteroid
{
    public:
        Asteroid();
        virtual ~Asteroid();
        Asteroid(const Asteroid &c);
        Asteroid &operator=(const Asteroid &c);

        virtual std::string beMined(DeepCoreMiner *miner) const;
        virtual std::string beMined(StripMiner *miner) const;
        virtual std::string getName() const;
};

#endif
