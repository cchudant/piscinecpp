/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 04:17:12 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 07:33:45 by cchudant         ###   ########.fr       */
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

        virtual int baseHitPoints();
        virtual int maxHitPoints();
        virtual int baseEnergyPoints();
        virtual int maxEnergyPoints();
        virtual int level();
        virtual int meleeAttackDamage();
        virtual int rangedAttackDamage();
        virtual int armorAttackReduction();

        void rangedAttack(const std::string &target);
        void meleeAttack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
