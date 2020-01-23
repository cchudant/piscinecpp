/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 07:50:17 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/23 16:54:45 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer {
    private:
        std::string _name, _title;

    public:
        Sorcerer(std::string name = "Anonymous", std::string title = "No title");
        Sorcerer(const Sorcerer &c);
        ~Sorcerer();
        Sorcerer &operator=(const Sorcerer &c);

        const std::string &getName() const;
        const std::string &getTitle() const;

        void polymorph(Victim const &c) const;
};

std::ostream &operator<<(std::ostream &out, const Sorcerer &s);

#endif