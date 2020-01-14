/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 07:51:19 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/14 07:53:50 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string.h>
# include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon *weapon;

    public:
        HumanB(std::string name, Weapon &weapon);
        HumanB(std::string name);

        std::string getName() const;

        void setName(std::string name);
        void setWeapon(Weapon &weapon);

        void attack() const;
};

#endif
