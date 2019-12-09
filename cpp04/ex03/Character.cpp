/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 18:11:28 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 21:12:30 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string name):
    _name(name)
{
    for (int i = 0; i < 4; i++)
        _inv[i] = NULL;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        delete _inv[i];
}

Character::Character(const Character &c):
    _name(c._name)
{
    for (int i = 0; i < 4; i++)
        _inv[i] = c._inv[i]->clone();
}

Character &Character::operator=(const Character &c)
{
    for (int i = 0; i < 4; i++)
        delete _inv[i];
    for (int i = 0; i < 4; i++)
        _inv[i] = c._inv[i]->clone();
    _name = c._name;
    return *this;
}

const std::string &Character::getName() const
{
    return _name;
}

void Character::equip(AMateria *m)
{
    if (_inv[3])
        return;
    int i = 0;
    while(_inv[i])
        i++;
    _inv[i] = m;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3 || !_inv[idx])
        return;
    _inv[idx] = NULL;
    for (int i = idx + 1; i < 4; i++)
        _inv[i - 1] = _inv[i];
    _inv[3] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx > 3 || !_inv[idx])
        return;
    _inv[idx]->use(target);
}
