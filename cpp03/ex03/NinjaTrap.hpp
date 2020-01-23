/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 04:17:12 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/23 14:34:01 by cchudant         ###   ########.fr       */
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
    public:
        NinjaTrap(std::string name);
        ~NinjaTrap();

        void rangedAttack(const std::string &target) const;
        void meleeAttack(const std::string &target) const;

        void ninjaShoebox(const FragTrap &target);
        void ninjaShoebox(const ScavTrap &target);
        void ninjaShoebox(const NinjaTrap &target);
};

#endif
