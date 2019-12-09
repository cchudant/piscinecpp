/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 09:55:51 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 11:41:43 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apcost, int damage):
    _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(const AWeapon &c):
    _name(c._name), _apcost(c._apcost), _damage(c._damage)
{
}

AWeapon &AWeapon::operator=(const AWeapon &c)
{
    _name = c._name;
    _apcost = c._apcost;
    _damage = c._damage;
    return *this;
}

const std::string &AWeapon::getName() const
{
    return _name;
}

int AWeapon::getAPCost() const
{
    return _apcost;
}

int AWeapon::getDamage() const
{
    return _damage;
}

void AWeapon::setName(std::string name)
{
    _name = name;
}

void AWeapon::setAPCost(int apcost)
{
    _apcost = apcost;
}

void AWeapon::setDamage(int damage)
{
    _damage = damage;
}
