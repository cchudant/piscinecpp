/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 07:51:14 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/14 07:53:42 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string.h>
# include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon *weapon;

    public:
        HumanA(std::string name, Weapon &weapon);
        HumanA(std::string name);

        std::string getName() const;

        void setName(std::string name);
        void setWeapon(Weapon &weapon);

        void attack() const;
};

#endif
