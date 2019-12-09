/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KoalaSteroid.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 21:31:01 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 21:55:39 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KOALASTEROID_HPP
# define KOALASTEROID_HPP

# include "IAsteroid.hpp"

class Comet: public IAsteroid
{
    public:
        Comet();
        virtual ~Comet();
        Comet(const Comet &c);
        Comet &operator=(const Comet &c);

        virtual std::string beMined(DeepCoreMiner *miner) const;
        virtual std::string beMined(StripMiner *miner) const;
        virtual std::string getName() const;
};

#endif