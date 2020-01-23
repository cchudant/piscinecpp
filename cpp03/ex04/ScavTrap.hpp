/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 04:17:12 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/23 14:56:02 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ~ScavTrap();

        virtual void rangedAttack(const std::string &target) const;
        virtual void meleeAttack(const std::string &target) const;

        virtual int baseHitPoints() const;
        virtual int maxHitPoints() const;
        virtual int baseEnergyPoints() const;
        virtual int maxEnergyPoints() const;
        virtual int level() const;
        virtual int meleeAttackDamage() const;
        virtual int rangedAttackDamage() const;
        virtual int armorAttackReduction() const;

        void challengeNewcomer(const std::string &target);
};

#endif
