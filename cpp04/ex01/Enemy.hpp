/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 10:45:03 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 01:15:08 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>

class Enemy
{
    private:
        int _hp;
        std::string _type;

    protected:
        void setType(const std::string &type);

        Enemy();

    public:
        Enemy(int hp, const std::string &type);
        virtual ~Enemy();
        Enemy(const Enemy &c);
        Enemy &operator=(const Enemy &c);

        const std::string &getType() const;
        int getHP() const;

        void setHP(int hp);

        virtual void takeDamage(int damage);
};

#endif
