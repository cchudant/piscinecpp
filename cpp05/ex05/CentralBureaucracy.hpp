/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 00:33:44 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/28 12:56:19 by cchudant         ###   ########.fr       */
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
        ~CentralBureaucracy();
        CentralBureaucracy(const CentralBureaucracy &c);
        CentralBureaucracy &operator=(const CentralBureaucracy &c);

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

        void feed(const Bureaucrat &b);
        void queueUp(std::string target);
        void doBureaucracy();
};

#endif
