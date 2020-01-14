/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 07:21:41 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/14 07:25:37 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include "Zombie.hpp"

class ZombieEvent
{
    private:
        std::string _type;

    public:
        ZombieEvent(std::string type);

        void setZombieType(std::string type);
        std::string getZombieType() const;

        Zombie *newZombie(std::string name) const;

        void randomChump() const;
};

#endif
