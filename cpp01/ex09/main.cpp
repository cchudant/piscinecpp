/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 08:08:08 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/14 08:08:09 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main()
{
    Logger log;

    log.log("console", "Log to console!");
    log.log("file", "Log to file!");
    log.log("console", "Ayaya!");
    log.log("file", "Wow!");
}
