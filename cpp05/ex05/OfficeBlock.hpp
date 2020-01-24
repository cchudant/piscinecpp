/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skybt <skybt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 22:48:40 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/05 13:21:42 by cchudant         ###   ########.fr       */
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
        OfficeBlock(Intern intern, Bureaucrat signing, Bureaucrat executing);

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

        void setIntern(Intern intern);
        void setSigner(Bureaucrat signer);
        void setExecutor(Bureaucrat executer);

        Intern *getIntern() const;
        Bureaucrat *getSigner() const;
        Bureaucrat *getExecutor() const;

        void doBureaucracy(std::string formName, std::string target) const;
};

#endif
