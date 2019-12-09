/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 13:50:08 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 15:19:10 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad: public ISquad
{
    public:
        struct node {
            ISpaceMarine *el;
            node *next;
        };

    private:
        node *_lst;
        int _count;

    public:
        Squad();
        virtual ~Squad();
        Squad(const Squad &s);
        Squad &operator=(const Squad &s);

        virtual int getCount() const;
        virtual ISpaceMarine *getUnit(int unit) const;
        virtual int push(ISpaceMarine *el);
};

#endif