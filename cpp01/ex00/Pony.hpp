/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 07:14:41 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/14 07:21:08 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

class Pony
{
	public:
		void trot();
};

Pony *ponyOnTheHeap();
Pony ponyOnTheStack();

#endif
