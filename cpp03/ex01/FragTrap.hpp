/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 03:11:10 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/23 14:24:44 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <string>

class FragTrap
{
    private:
        std::string _name;
        int _hitPoints, _maxHitPoints, _energyPoints, _maxEnergyPoints,
            _level, _meleeAttackDamage, _rangedAttackDamage,
            _armorAttackReduction;
    public:
        FragTrap(std::string name);
        ~FragTrap();

        void rangedAttack(const std::string &target) const;
        void meleeAttack(const std::string &target) const;
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void vaulthunter_dot_exe(const std::string &target);
};

#endif
