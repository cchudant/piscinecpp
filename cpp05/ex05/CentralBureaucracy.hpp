/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skybt <skybt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 00:33:44 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/05 14:16:33 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CENTRAL_BUREAUCRACY_HPP
# define CENTRAL_BUREAUCRACY_HPP

# include "OfficeBlock.hpp"

class CentralBureaucracy
{
    private:
        OfficeBlock _blocks[20];
        std::string _targets[100];
        int _index;

        OfficeBlock &nextBlock();

    public:
        CentralBureaucracy();

        class ResumeRejectedException: public std::exception
        {
            public:
                virtual char const *what() const throw();
        };

        class TooMuchWorkException: public std::exception
        {
            public:
                virtual char const *what() const throw();
        };

        class NoOfficeBlockException: public std::exception
        {
            public:
                virtual char const *what() const throw();
        };

        void feed(Bureaucrat b);
        void queueUp(std::string target);
        void doBureaucracy();
};

#endif
