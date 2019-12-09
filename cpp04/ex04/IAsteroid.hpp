/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAsteroid.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 21:31:01 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 22:29:34 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IASTEROID_HPP
# define IASTEROID_HPP

# include <string>

class StripMiner;
class DeepCoreMiner;

class IAsteroid
{
    public:
        virtual ~IAsteroid() {}
        virtual std::string beMined(DeepCoreMiner *miner) const = 0;
        virtual std::string beMined(StripMiner *miner) const = 0;
        virtual std::string getName() const = 0;
};

#endif