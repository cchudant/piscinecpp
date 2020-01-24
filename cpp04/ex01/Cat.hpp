/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 10:58:17 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 02:17:30 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Enemy.hpp"

class Cat: public Enemy
{
    public:
        Cat();
        virtual ~Cat();
        Cat(const Cat &c);
        Cat &operator=(const Cat &c);
};

#endif
