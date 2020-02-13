/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   XCounter.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 06:38:54 by cchudant          #+#    #+#             */
/*   Updated: 2020/02/13 06:53:55 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef XCOUNTER_HPP
# define XCOUNTER_HPP

class XCounter
{
	private:
		int val;

		XCounter(const XCounter &o);
		XCounter &operator=(const XCounter &o);

	public:
		XCounter();
		~XCounter();

		void operator()(char c);
		int getCount() const;
};

#endif
