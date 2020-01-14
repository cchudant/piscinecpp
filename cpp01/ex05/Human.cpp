/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 07:47:26 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/14 07:47:28 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Human.hpp"

std::string Human::identify() const
{
    return _brain.identify();
}

Brain &Human::getBrain()
{
    return _brain;
}
