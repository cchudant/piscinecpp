/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 22:48:40 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/24 04:11:09 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICE_BLOCK_H
# define OFFICE_BLOCK_H

# include "Form.hpp"
# include "Intern.hpp"

class OfficeBlock
{
    private:
        Intern *_intern;
        Bureaucrat *_signing;
        Bureaucrat *_executing;

    public:
        OfficeBlock();
        ~OfficeBlock();
        OfficeBlock(const Intern &intern, const Bureaucrat &signing,
            const Bureaucrat &executing);

        class NoInternException: public std::exception
        {
            public:
                virtual char const *what() const throw();
        };

        class NoSigningBureaucratException: public std::exception
        {
            public:
                virtual char const *what() const throw();
        };

        class NoExecutingBureaucratException: public std::exception
        {
            public:
                virtual char const *what() const throw();
        };

        class InternConfusedException: public std::exception
        {
            public:
                virtual char const *what() const throw();
        };

        void setIntern(const Intern &intern);
        void setSigner(const Bureaucrat &signer);
        void setExecutor(const Bureaucrat &executer);

        const Intern *getIntern() const;
        const Bureaucrat *getSigner() const;
        const Bureaucrat *getExecutor() const;

        void doBureaucracy(std::string formName, std::string target) const;
};

#endif
