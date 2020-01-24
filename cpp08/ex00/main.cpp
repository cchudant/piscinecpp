/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skybt <skybt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 23:45:26 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/06 00:03:52 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"

char const *NotFoundException::what() const throw()
{
    return "Cannot find value!";
}

int main()
{
    std::vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    std::cout << easyfind(v, 3) << std::endl;
    for (std::vector<int>::iterator ite = v.begin(); ite < v.end(); ite++)
        std::cout << *ite << std::endl;
    return 0;
}
