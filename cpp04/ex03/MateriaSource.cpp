/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 19:11:11 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 22:17:44 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        _inv[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete _inv[i];
}

MateriaSource::MateriaSource(const MateriaSource &c)
{
    for (int i = 0; i < 4; i++)
        _inv[i] = c._inv[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &c)
{
    for (int i = 0; i < 4; i++)
        delete _inv[i];
    for (int i = 0; i < 4; i++)
        _inv[i] = c._inv[i];
    return *this;
}

void MateriaSource::learnMateria(AMateria *materia)
{
    if (_inv[3])
        return;
    int i = 0;
    while (_inv[i])
        i++;
    _inv[i] = materia;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
    for (int i = 0; i < 4; i++)
        if (_inv[i] && _inv[i]->getType() == type)
            return _inv[i]->clone();
    return NULL;
}
