/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 13:39:48 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 15:16:10 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <iostream>

static Squad::node *lst_deep_cpy(Squad::node *node)
{
    if (!node)
        return NULL;
    return new Squad::node((Squad::node) { node->el, lst_deep_cpy(node->next) });
}

static void lst_destroy(Squad::node *node)
{
    if (!node)
        return;
    delete node->el;
    lst_destroy(node->next); 
    delete node;
}

Squad::Squad():
    _lst(NULL), _count(0)
{
}

Squad::~Squad()
{
    lst_destroy(_lst);
}

Squad::Squad(const Squad &s):
    _lst(lst_deep_cpy(s._lst)), _count(s._count)
{
}

Squad &Squad::operator=(const Squad &s)
{
    lst_destroy(_lst);
    _lst = lst_deep_cpy(s._lst);
    _count = s._count;
    return *this;
}

int Squad::getCount() const
{
    return _count;
}

ISpaceMarine *Squad::getUnit(int unit) const
{
    Squad::node *node = _lst;
    for (int i = 0; i != unit && node; i++)
        node = node->next;
    return node ? node->el : NULL;
}

int Squad::push(ISpaceMarine *el)
{
    Squad::node **node = &_lst;
    while (*node)
        node = &(*node)->next;
    *node = new Squad::node((Squad::node) { el, NULL });
    return ++_count;
}
