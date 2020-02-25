/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 00:08:21 by cchudant          #+#    #+#             */
/*   Updated: 2020/02/17 15:32:06 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <exception>
# include <vector>

class Span
{
    private:
        unsigned int _n;
        std::vector<int> _vec;

        Span();

    public:
        Span(unsigned int n);
        Span(const Span &o);
        ~Span();
        Span &operator=(const Span &o);

        class SpanFullException: public std::exception
        {
            public:
                char const *what() const throw();
        };

        class NoSpanException: public std::exception
        {
            public:
                char const *what() const throw();
        };

        void addNumber(int number);
        int shortestSpan() const;
        int longestSpan() const;
};

#endif
