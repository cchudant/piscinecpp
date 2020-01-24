/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skybt <skybt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 22:55:12 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/05 14:21:02 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"
#include <exception>
#include <iostream>

int main()
{
    Bureaucrat god("God", 1);
    Bureaucrat god2("Not God", 1);
    CentralBureaucracy b = CentralBureaucracy();
    b.feed(god);
    b.feed(god);
    b.feed(god2);
    b.feed(god2);
    b.queueUp("unicorn");
    b.queueUp("unicorn1");
    b.queueUp("unicorn2");
    b.queueUp("unicorn3");
    b.queueUp("unicorn4");
    b.doBureaucracy();
}
