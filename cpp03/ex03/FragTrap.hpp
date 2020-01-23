/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 03:11:10 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/23 14:27:16 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
        FragTrap(std::string name);
        ~FragTrap();

        void rangedAttack(const std::string &target) const;
        void meleeAttack(const std::string &target) const;

        void vaulthunter_dot_exe(const std::string &target);
};

#endif
