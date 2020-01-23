/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 11:26:35 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/23 22:33:05 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(const std::string &name):
    _name(name), _ap(40), _weapon(NULL)
{
}

Character::~Character()
{
}

Character::Character(const Character &c):
    _name(c._name), _ap(c._ap), _weapon(c._weapon->clone())
{
}

Character &Character::operator=(const Character &c)
{
    _name = c._name;
    _ap = c._ap;
    _weapon = c._weapon->clone();
    return *this;
}

void Character::recoverAP()
{
    _ap += 10;
    if (_ap > 40)
        _ap = 40;
}

void Character::equip(AWeapon *weapon)
{
    _weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
    if (!_weapon)
    {
        std::cout << _name << " has no weapon!" << std::endl;
        return;
    }
    if (_ap < _weapon->getAPCost())
    {
        std::cout << _name << " doesn't have enough AP!" << std::endl;
        return;
    }

    _ap -= _weapon->getAPCost();
    std::cout << _name << " attacks "
        << enemy->getType() << " with a "
        << _weapon->getName() << std::endl;

    _weapon->attack();
    enemy->setHP(enemy->getHP() - _weapon->getDamage());
    if (enemy->getHP() <= 0)
        delete enemy;
}

const std::string &Character::getName() const
{
    return _name;
}

const AWeapon *Character::getWeapon() const
{
    return _weapon;
}

int Character::getAP() const
{
    return _ap;
}

std::ostream &operator<<(std::ostream &out, const Character &c)
{
    if (!c.getWeapon())
        return out << c.getName()
            << " has " << c.getAP()
            << " AP and is unarmed" << std::endl;

    return out << c.getName()
        << " has " << c.getAP()
        << " AP and wields a " << c.getWeapon()->getName()
        << std::endl;
}