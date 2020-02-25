/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 15:30:53 by cchudant          #+#    #+#             */
/*   Updated: 2020/02/17 16:30:58 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>

int main() {
    std::cout << "- 1." << std::endl;
    {
        Span sp = Span(5);

        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    std::cout << "- 2." << std::endl;
    {
        Span sp = Span(3);

        sp.addNumber(1);
        sp.addNumber(2);
        sp.addNumber(3);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    std::cout << "- 3." << std::endl;
    {
        Span sp = Span(3);

        sp.addNumber(90);
        sp.addNumber(95);
        sp.addNumber(1200);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    std::cout << "- 4." << std::endl;
    {
        Span sp = Span(1);

        sp.addNumber(42);

        try { (void)sp.shortestSpan(); }
        catch (Span::NoSpanException &e)
        {
            std::cout << "No span!" << std::endl;
        }

        try { (void)sp.longestSpan(); }
        catch (Span::NoSpanException &e)
        {
            std::cout << "No span!" << std::endl;
        }
    }
    std::cout << "- 5." << std::endl;
    {
        Span sp = Span(5);

        sp.addNumber(42);
        sp.addNumber(42);
        sp.addNumber(42);
        sp.addNumber(42);
        sp.addNumber(42);

        try { (void)sp.addNumber(42); }
        catch (Span::SpanFullException &e)
        {
            std::cout << "Span full!" << std::endl;
        }
    }
}
