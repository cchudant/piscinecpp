/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skybt <skybt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 20:44:46 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/05 20:58:15 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate()
{
    int i = rand() % 3;
    if (i == 0)
        return new A();
    if (i == 1)
        return new B();
    return new C();
}

void identify_from_pointer(Base *p)
{
    if (A *v = dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (B *v = dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (C *v = dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

int main()
{
    A *a = new A();
    B *b = new B();
    C *c = new C();
    identify_from_pointer(a);
    identify_from_pointer(b);
    identify_from_pointer(c);
    return 0;
}
