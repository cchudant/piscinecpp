/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 22:49:31 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 05:24:27 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

template <typename T>
static void display(const Array<T> &array)
{
    std::cout << "Array (" << array.size() << ") { ";
    for (size_t i = 0; i < array.size(); i++)
        std::cout << array[i] << ", ";
    std::cout << "}" << std::endl;
}

int main()
{
    Array<int> array(5);

    display(array);
    array[4] = 1;
    display(array);
    array[3] = 5;
    display(array);
    array[0] = 2;
    display(array);

    Array<int> array2;

    display(array2);
    array2 = array;
    display(array2);

    Array<int> array3(array2);

    display(array3);

    try
    {
        (void)array[5];
    }
    catch (const Array<int>::OutOfBoundException &e)
    {
        std::cout << "Caught OutOfBoundException: " << e.what() << std::endl;
    }
    return 0;
}
