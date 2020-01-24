/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 10:51:39 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 01:15:17 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{
}

Enemy::Enemy(int hp, const std::string &type): _hp(hp), _type(type)
{
}

Enemy::~Enemy()
{
}

Enemy::Enemy(const Enemy &c): _hp(c._hp), _type(c._type)
{
}

Enemy &Enemy::operator=(const Enemy &c)
{
    _hp = c._hp;
    _type = c._type;
    return *this;
}

const std::string &Enemy::getType() const
{
    return _type;
}

int Enemy::getHP() const
{
    return _hp;
}

void Enemy::setType(const std::string &type)
{
    _type = type;
}

void Enemy::setHP(int hp)
{
    _hp = hp;
}

void Enemy::takeDamage(int damage)
{
    if (damage < 0)
        return ;
    _hp -= damage;
    if (_hp < 0)
        _hp = 0;
}
