/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 20:44:46 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 04:48:34 by cchudant         ###   ########.fr       */
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

void identify_from_reference(Base &p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    }
    catch(const std::bad_cast &e) {}

    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    }
    catch(const std::bad_cast &e) {}

    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
    }
    catch(const std::bad_cast &e) {}
    
}

int main()
{
    std::cout << "From pointer" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        Base *inst = generate();
        identify_from_pointer(inst);
        delete inst;
    }
    std::cout << "From reference" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        Base *inst = generate();
        identify_from_reference(*inst);
        delete inst;
    }
    return 0;
}
