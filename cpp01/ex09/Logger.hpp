/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 08:08:19 by cchudant          #+#    #+#             */
/*   Updated: 2020/01/14 08:08:21 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <string>

class Logger
{
    private:
        void logToConsole(std::string message);
        void logToFile(std::string message);
        std::string makeLogEntry(std::string message);

        struct vtab_entry
        {
            std::string name;
            void (Logger::*fn)(std::string s);
        };
        static const Logger::vtab_entry vtab[];
        static const int vtab_len;

    public:
        void log(const std::string &dest, const std::string &message);
};

#endif
