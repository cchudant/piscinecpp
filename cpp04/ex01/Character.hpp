/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 11:22:10 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 01:14:32 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
    private:
        std::string _name;
        int _ap;
        AWeapon *_weapon;

        Character();
    
    public:
        Character(const std::string &name);
        ~Character();
        Character(const Character &c);
        Character &operator=(const Character &c);

        void recoverAP();
        void equip(AWeapon *weapon);
        void attack(Enemy *enemy);

        const std::string &getName() const;
        const AWeapon *getWeapon() const;
        int getAP() const;
};

std::ostream &operator<<(std::ostream &out, const Character &c);

#endif
