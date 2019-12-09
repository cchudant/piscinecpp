/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 10:01:11 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 13:22:23 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
    public:
        PlasmaRifle();
        virtual ~PlasmaRifle();
        PlasmaRifle(const PlasmaRifle &c);
        PlasmaRifle &operator=(const PlasmaRifle &c);

        virtual PlasmaRifle *clone();

        virtual void attack() const;
};

#endif
