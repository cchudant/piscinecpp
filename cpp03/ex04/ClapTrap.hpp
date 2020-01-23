/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 04:31:02 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/23 15:15:33 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <string>

class ClapTrap
{
    private:
        std::string _name;
        int _hitPoints, _energyPoints;

    protected:
        void setEnergyPoints(const int &energyPoints);
        void setHitPoints(const int &hitPoints);

    public:
        ClapTrap(std::string name, int hitPoints, int energyPoints);
        virtual ~ClapTrap();

        const std::string &getName() const;
        const int &getHitPoints() const;
        const int &getEnergyPoints() const;

        virtual int baseHitPoints() const = 0;
        virtual int maxHitPoints() const = 0;
        virtual int baseEnergyPoints() const = 0;
        virtual int maxEnergyPoints() const = 0;
        virtual int level() const = 0;
        virtual int meleeAttackDamage() const = 0;
        virtual int rangedAttackDamage() const = 0;
        virtual int armorAttackReduction() const = 0;

        virtual void rangedAttack(const std::string &target) const = 0;
        virtual void meleeAttack(const std::string &target) const = 0;
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
