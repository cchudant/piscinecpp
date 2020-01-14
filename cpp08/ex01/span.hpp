/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skybt <skybt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 00:08:21 by skybt             #+#    #+#             */
/*   Updated: 2020/01/11 15:41:56 by skybt            ###   ########.fr       */
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

    public:
        Span(unsigned int n);
        ~Span();

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
