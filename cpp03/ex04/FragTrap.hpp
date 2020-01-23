/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 03:11:10 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/23 14:56:23 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
    public:
        FragTrap(std::string name);
        ~FragTrap();

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

        void vaulthunter_dot_exe(const std::string &target);
};

#endif
