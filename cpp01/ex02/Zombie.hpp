/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 07:21:15 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/14 07:25:06 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
    private:
        std::string _type, _name;
    public:
        Zombie(std::string type, std::string name);

        std::string getType() const;
        std::string getName() const;

        void announce() const;
};

#endif
