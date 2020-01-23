/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 04:17:12 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/23 14:25:19 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include <string>

class ScavTrap
{
    private:
        std::string _name;
        int _hitPoints, _maxHitPoints, _energyPoints, _maxEnergyPoints,
            _level, _meleeAttackDamage, _rangedAttackDamage,
            _armorAttackReduction;
    public:
        ScavTrap(std::string name);
        ~ScavTrap();

        void rangedAttack(const std::string &target) const;
        void meleeAttack(const std::string &target) const;
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void challengeNewcomer(const std::string &target);
};

#endif
