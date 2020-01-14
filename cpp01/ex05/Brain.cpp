/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 07:44:23 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/14 07:49:27 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "Brain.hpp"

void Brain::generateStupidIdea() const
{
    std::cout <<  "how about eating a pizza upside down" << std::endl;
}

std::string Brain::identify() const
{
    std::stringstream ss;
    ss << std::hex << std::showbase << (unsigned long)this;
    return ss.str();
}
