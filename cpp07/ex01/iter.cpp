/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skybt <skybt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 21:51:40 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/05 22:10:12 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void iter(T *t, size_t len, void (*fn)(T&))
{
    for (size_t i = 0; i < len; i++)
        (*fn)(t[i]);
}

void fn(int &t)
{
    std::cout << t << std::endl;
}

int main()
{
    int array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    iter(array, 10, &fn);
}
