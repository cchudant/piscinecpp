/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 20:43:33 by cchudant          #+#    #+#             */
/*   Updated: 2020/02/17 14:35:55 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base()
{
}

Base::~Base()
{
}

Base::Base(const Base &c)
{
	(void)c;
}

Base &Base::operator=(const Base &c)
{
	(void)c;
	return *this;
}
