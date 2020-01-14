/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 07:53:19 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/14 07:55:01 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type)
{
}

const std::string &Weapon::getType() const
{
    return type;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}
