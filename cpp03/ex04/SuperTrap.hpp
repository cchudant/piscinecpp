/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 04:17:12 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/23 15:17:07 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_TRAP_HPP
# define SUPER_TRAP_HPP

# include <string>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap: public NinjaTrap, public FragTrap
{
    protected:
        SuperTrap(std::string name, int hitPoints, int energyPoints);

    public:
        SuperTrap(std::string name);
        ~SuperTrap();

        virtual int baseHitPoints() const;
        virtual int maxHitPoints() const;
        virtual int baseEnergyPoints() const;
        virtual int maxEnergyPoints() const;
        virtual int level() const;
        virtual int meleeAttackDamage() const;
        virtual int rangedAttackDamage() const;
        virtual int armorAttackReduction() const;

        virtual void rangedAttack(const std::string &target) const;
        virtual void meleeAttack(const std::string &target) const;
};

#endif
