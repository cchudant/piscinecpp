/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 04:17:12 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/23 14:56:16 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_HPP
# define NINJA_TRAP_HPP

# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: virtual public ClapTrap
{
    public:
        NinjaTrap(std::string name);
        ~NinjaTrap();

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

        void ninjaShoebox(const FragTrap &target);
        void ninjaShoebox(const ScavTrap &target);
        void ninjaShoebox(const NinjaTrap &target);
};

#endif
