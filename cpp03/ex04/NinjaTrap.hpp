/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 04:17:12 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 07:10:04 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_HPP
# define NINJA_TRAP_HPP

# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: public ClapTrap
{
    protected:
        NinjaTrap(std::string name, int hitPoints, int energyPoints);

    public:
        NinjaTrap(std::string name);
        ~NinjaTrap();

        virtual int baseHitPoints();
        virtual int maxHitPoints();
        virtual int baseEnergyPoints();
        virtual int maxEnergyPoints();
        virtual int level();
        virtual int meleeAttackDamage();
        virtual int rangedAttackDamage();
        virtual int armorAttackReduction();

        void ninjaShoebox(const FragTrap &target);
        void ninjaShoebox(const ScavTrap &target);
        void ninjaShoebox(const NinjaTrap &target);
};

#endif
