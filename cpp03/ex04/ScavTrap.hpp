/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 04:17:12 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 07:10:23 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    protected:
        ScavTrap(std::string name, int hitPoints, int energyPoints);

    public:
        ScavTrap(std::string name);
        ~ScavTrap();

        virtual int baseHitPoints();
        virtual int maxHitPoints();
        virtual int baseEnergyPoints();
        virtual int maxEnergyPoints();
        virtual int level();
        virtual int meleeAttackDamage();
        virtual int rangedAttackDamage();
        virtual int armorAttackReduction();

        void challengeNewcomer(const std::string &target);
};

#endif
