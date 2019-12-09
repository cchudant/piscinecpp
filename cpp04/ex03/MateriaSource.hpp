/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 19:08:22 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 19:25:13 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    private:
        AMateria* _inv[4];

    public:
        MateriaSource();
        virtual ~MateriaSource();
        MateriaSource(const MateriaSource &c);
        MateriaSource &operator=(const MateriaSource &c);

        virtual void learnMateria(AMateria *materia);
        virtual AMateria *createMateria(const std::string &type);
};

#endif
