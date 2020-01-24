/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 13:50:08 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 02:27:44 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad: public ISquad
{
    private:
        struct node {
            ISpaceMarine *el;
            node *next;
        };

        node *_lst;
        int _count;

        node *lst_deep_cpy(node *node);
        void lst_destroy(node *node);

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
