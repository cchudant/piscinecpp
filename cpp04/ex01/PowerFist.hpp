/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 10:01:11 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 13:22:26 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist: public AWeapon
{
    public:
        PowerFist();
        virtual ~PowerFist();
        PowerFist(const PowerFist &c);
        PowerFist &operator=(const PowerFist &c);

        virtual PowerFist *clone();

        virtual void attack() const;
};

#endif
