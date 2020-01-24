/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 10:58:19 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 02:16:50 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(): Enemy(10, "Cat")
{
    std::cout << "Meoww!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Meowww~" << std::endl;
}

Cat::Cat(const Cat &c): Enemy(c.getHP(), c.getType())
{
    std::cout << "Meoww!" << std::endl;
}

Cat &Cat::operator=(const Cat &c)
{
    std::cout << "Meowww~" << std::endl;
    setHP(c.getHP());
    setType(c.getType());
    std::cout << "Meoww!" << std::endl;
    return *this;
}
