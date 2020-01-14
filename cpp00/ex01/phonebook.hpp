/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 07:11:26 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/14 07:20:50 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class Contact {
    public:
        std::string first_name, last_name, nickname, login, postal_address,
            phone_number, birthday_date, favorite_meal, underwear_color,
            darkest_secret;

        Contact();
        void ask();
        void display_compact(int index);
        void display();
};

#endif
