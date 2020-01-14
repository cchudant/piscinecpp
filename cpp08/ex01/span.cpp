/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skybt <skybt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 14:56:24 by skybt             #+#    #+#             */
/*   Updated: 2020/01/11 22:58:46 by skybt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <algorithm>
#include <stdio.h>

char const *Span::SpanFullException::what() const throw()
{
    return "The span instance is full!";
}

char const *Span::NoSpanException::what() const throw()
{
    return "Cannot find span: N <= 1!";
}

Span::Span(unsigned int n): _n(n), _vec()
{
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
    if (_vec.size() >= _n)
        throw Span::SpanFullException();
    _vec.push_back(n);
}

class SpanCmp
{
        int _el;
    public:
        SpanCmp(int span): _el(span) {}
        bool operator()(int elA, int elB)
        {
            if (elA == _el)
                return false;
            printf("_el = %d; (a, b) = (%d, %d)\n", _el, elA, elB);
            printf("abs = %d / %d\n", elA - _el, elB - _el);
            return std::abs(elA - _el) < std::abs(elB - _el);
        }
};

int Span::shortestSpan() const
{
    if (_vec.size() <= 1)
        throw Span::NoSpanException();

    std::vector<int> spans(_vec);
    for (std::vector<int>::iterator span_ite = spans.begin(); span_ite != spans.end(); ++span_ite)
    {
        printf("ayaya %d\n", *span_ite);
        std::vector<int>::const_iterator res = std::min_element(_vec.begin(), _vec.end(), SpanCmp(*span_ite));
        *span_ite = std::abs(spans[res - _vec.begin()] - *span_ite);
    }
    return *std::min_element(spans.begin(), spans.end());
}

int Span::longestSpan() const
{
    if (_vec.size() <= 1)
        throw Span::NoSpanException();
    int max = *std::max_element(_vec.begin(), _vec.end());
    int min = *std::min_element(_vec.begin(), _vec.end());
    return max - min;
}
