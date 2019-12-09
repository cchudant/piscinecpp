/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 21:32:49 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 22:28:21 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DeepCoreMiner.hpp"
#include "IAsteroid.hpp"
#include <iostream>

DeepCoreMiner::DeepCoreMiner()
{
}

DeepCoreMiner::~DeepCoreMiner()
{
}

DeepCoreMiner::DeepCoreMiner(const DeepCoreMiner &c)
{
    (void)c;
}

DeepCoreMiner &DeepCoreMiner::operator=(DeepCoreMiner &c)
{
    (void)c;
    return *this;
}

void DeepCoreMiner::mine(IAsteroid *asteroid)
{
    std::cout << "* mining deep ... got "
        << asteroid->beMined(this) << " ! *" << std::endl;
}
