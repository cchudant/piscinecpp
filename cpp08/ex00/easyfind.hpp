/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skybt <skybt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 23:21:46 by skybt             #+#    #+#             */
/*   Updated: 2020/01/06 00:03:16 by skybt            ###   ########.fr       */
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

template <typename Container>
int &easyfind(Container c, int i)
{
    typename Container::iterator found = std::find(c.begin(), c.end(), i);
    if (found == c.end())
        throw NotFoundException();
    return *found;
}

#endif
