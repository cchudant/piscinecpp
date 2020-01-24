/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skybt <skybt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 22:49:31 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/05 23:07:07 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main()
{
    Array<int> array(5);

    std::cout << "hi " << array[1] << std::endl;
    array[0] = 50;
    std::cout << "hi " << array[0] << std::endl;
}
