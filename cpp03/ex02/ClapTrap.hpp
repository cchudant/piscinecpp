/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 04:31:02 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 04:46:53 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <string>

class ClapTrap
{
    protected:
        std::string _name;
        int _hitPoints, _maxHitPoints, _energyPoints, _maxEnergyPoints,
            _level, _meleeAttackDamage, _rangedAttackDamage,
            _armorAttackReduction;
    public:
        ClapTrap(std::string name);
        ~ClapTrap();

        void rangedAttack(const std::string &target);
        void meleeAttack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
