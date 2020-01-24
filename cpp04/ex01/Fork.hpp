/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fork.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 10:01:11 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 02:11:08 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORK_HPP
# define FORK_HPP

# include "AWeapon.hpp"

class Fork: public AWeapon
{
    public:
        Fork();
        virtual ~Fork();
        Fork(const Fork &c);
        Fork &operator=(const Fork &c);

        virtual Fork *clone();

        virtual void attack() const;
};

#endif
