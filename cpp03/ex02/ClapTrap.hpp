/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 04:31:02 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/23 14:26:05 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <string>

class ClapTrap
{
    private:
        std::string _name;
        int _hitPoints, _maxHitPoints, _energyPoints, _maxEnergyPoints,
            _level, _meleeAttackDamage, _rangedAttackDamage,
            _armorAttackReduction;

    protected:
        void setEnergyPoints(const int &energyPoints);
        void setHitPoints(const int &hitPoints);

    public:
        ClapTrap(std::string name, int hitPoints, int maxHitPoints,
                int energyPoints, int maxEnergyPoints, int level,
                int meleeAttackDamage, int rangedAttackDamage,
                int armorAttackReduction);
        virtual ~ClapTrap();

        const std::string &getName() const;
        const int &getHitPoints() const;
        const int &getMaxHitPoints() const;
        const int &getEnergyPoints() const;
        const int &getMaxEnergyPoints() const;
        const int &getLevel() const;
        const int &getMeleeAttackDamage() const;
        const int &getRangedAttackDamage() const;
        const int &getArmorAttackReduction() const;

        virtual void rangedAttack(const std::string &target) const = 0;
        virtual void meleeAttack(const std::string &target) const = 0;
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
