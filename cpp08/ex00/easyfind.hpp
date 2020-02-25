/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 23:21:46 by cchudant          #+#    #+#             */
/*   Updated: 2020/02/17 15:05:26 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <vector>

class NotFoundException: public std::exception
{
    public:
        virtual char const *what() const throw();
};

template <typename T>
int &easyfind(T c, int i)
{
    typename T::iterator found = std::find(c.begin(), c.end(), i);
    if (found == c.end())
        throw NotFoundException();
    return *found;
}

#endif
