/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantPigTerminationForm.hpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 23:29:21 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/28 13:57:32 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_PIG_TERMINATION_FORM_HPP
# define MUTANT_PIG_TERMINATION_FORM_HPP

# include "Form.hpp"

class MutantPigTerminationForm: public Form
{
    private:
        MutantPigTerminationForm();
        MutantPigTerminationForm &operator=(const MutantPigTerminationForm &c);

    public:
        MutantPigTerminationForm(std::string target);
        virtual ~MutantPigTerminationForm();
        MutantPigTerminationForm(const MutantPigTerminationForm &c);

        virtual void execute(const Bureaucrat &b) const;
};

#endif
