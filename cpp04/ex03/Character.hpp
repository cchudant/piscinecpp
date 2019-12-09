/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 17:55:38 by cchudant          #+#    #+#             */
/*   Updated: 2019/12/09 19:21:06 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character: public ICharacter
{
    private:
        std::string _name;
        AMateria* _inv[4];

    public:
        Character(const std::string name = "nobody");
        virtual ~Character();
        Character(const Character &c);
        Character &operator=(const Character&c);

        virtual const std::string &getName() const;
        virtual void equip(AMateria *m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter &target);
};

#endif
