/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   XCounter.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 06:41:45 by cchudant          #+#    #+#             */
/*   Updated: 2020/02/13 06:53:50 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "XCounter.hpp"

XCounter::XCounter(): val(0)
{
}

XCounter::~XCounter()
{
}

void XCounter::operator()(char c)
{
	val += c == 'X';
}

int XCounter::getCount() const
{
	return val;
}
