/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 03:11:10 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 07:09:33 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    protected:
        FragTrap(std::string name, int hitPoints, int energyPoints);

    public:
        FragTrap(std::string name);
        ~FragTrap();

        virtual int baseHitPoints();
        virtual int maxHitPoints();
        virtual int baseEnergyPoints();
        virtual int maxEnergyPoints();
        virtual int level();
        virtual int meleeAttackDamage();
        virtual int rangedAttackDamage();
        virtual int armorAttackReduction();

        void vaulthunter_dot_exe(const std::string &target);
};

#endif
