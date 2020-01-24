/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 21:57:56 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 22:29:57 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MININGBARGE_HPP
# define MININGBARGE_HPP

# include "IMiningLaser.hpp"

class MiningBarge
{
    private:
        IMiningLaser *_inv[4];

    public:
        MiningBarge();
        ~MiningBarge();
        MiningBarge(const MiningBarge &c);
        MiningBarge &operator=(const MiningBarge &c);

        void equip(IMiningLaser *laser);
        void mine(IAsteroid *asteroid) const;
};

#endif
