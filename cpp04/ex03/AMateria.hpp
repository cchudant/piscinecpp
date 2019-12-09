/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 15:24:03 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 21:01:55 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <string>

class ICharacter;

class AMateria
{
    private:
        std::string _type;
        unsigned int _xp;

    public:
        AMateria(const std::string &type);
        virtual ~AMateria();

        const std::string &getType() const;
        unsigned int getXP() const;

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter &target);
};

#endif
