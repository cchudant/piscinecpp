/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 14:56:24 by cchudant          #+#    #+#             */
/*   Updated: 2020/02/17 16:26:01 by cchudant         ###   ########.fr       */
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

Span::Span(const Span &o): _n(o._n), _vec(o._vec)
{
}

Span &Span::operator=(const Span &o)
{
    _n = o._n;
    _vec = o._vec;
    return *this;
}

void Span::addNumber(int n)
{
    if (_vec.size() >= _n)
        throw Span::SpanFullException();
    _vec.push_back(n);
}

int Span::shortestSpan() const
{
    if (_vec.size() <= 1)
        throw Span::NoSpanException();

    std::vector<int> spans(_vec);
    for (std::vector<int>::iterator span_ite = spans.begin(); span_ite != spans.end(); ++span_ite)
    {
        int min_diff = INT_MAX;
        for (std::vector<int>::const_iterator ite = _vec.begin(); ite != _vec.end(); ++ite)
            if (ite - _vec.begin() != span_ite - spans.begin())
                min_diff = std::min(std::abs(*span_ite - *ite), min_diff);
        *span_ite = min_diff;
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
