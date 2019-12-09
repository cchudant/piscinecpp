/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 09:50:08 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 13:21:53 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>

class AWeapon
{
    private:
        std::string _name;
        int _apcost, _damage;

    protected:
        void setName(std::string name);
        void setAPCost(int apcost);
        void setDamage(int damage);
    
    public:
        AWeapon(const std::string &name = "Unnamed", int apcost = 0, int damage = 0);
        virtual ~AWeapon();
        AWeapon(const AWeapon &c);
        AWeapon &operator=(const AWeapon &c);

        const std::string &getName() const;
        int getAPCost() const;
        int getDamage() const;

        virtual AWeapon *clone() = 0;

        virtual void attack() const = 0;

};

#endif