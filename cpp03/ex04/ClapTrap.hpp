/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 04:31:02 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 06:58:57 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <string>

class ClapTrap
{
    protected:
        std::string _name;
        int _hitPoints;
        int _energyPoints;

        ClapTrap(std::string name, int hitPoints, int energyPoints);

    public:
        ClapTrap(std::string name);
        ~ClapTrap();

        virtual int baseHitPoints();
        virtual int maxHitPoints();
        virtual int baseEnergyPoints();
        virtual int maxEnergyPoints();
        virtual int level();
        virtual int meleeAttackDamage();
        virtual int rangedAttackDamage();
        virtual int armorAttackReduction();

        const std::string get_name() const;

        void rangedAttack(const std::string &target);
        void meleeAttack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
