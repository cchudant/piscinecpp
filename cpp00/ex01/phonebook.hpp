/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 07:11:26 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/14 15:27:21 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class Contact
{
    private:
        std::string first_name, last_name, nickname, login, postal_address,
            phone_number, birthday_date, favorite_meal, underwear_color,
            darkest_secret;

    public:
        Contact();

        const std::string &getFirstName() const;
        const std::string &getLastName() const;
        const std::string &getNickname() const;
        const std::string &getLogin() const;
        const std::string &getPostalAddress() const;
        const std::string &getPhoneNumber() const;
        const std::string &getBirthdayDate() const;
        const std::string &getFavoriteMeal() const;
        const std::string &getUnderwearColor() const;
        const std::string &getDarkestSecret() const;

        void setFirstName(std::string nw);
        void setLastName(std::string nw);
        void setNickname(std::string nw);
        void setLogin(std::string nw);
        void setPostalAddress(std::string nw);
        void setPhoneNumber(std::string nw);
        void setBirthdayDate(std::string nw);
        void setFavoriteMeal(std::string nw);
        void setUnderwearColor(std::string nw);
        void setDarkestSecret(std::string nw);

        void ask();
        void display_compact(int index);
        void display();
};

#endif
