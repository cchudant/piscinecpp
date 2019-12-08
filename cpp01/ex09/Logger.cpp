#include <sstream>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <ctime>
#include "Logger.hpp"

const Logger::vtab_entry Logger::vtab[] = {
    { "console", &Logger::logToConsole },
    { "file", &Logger::logToFile },
};
const int Logger::vtab_len = 2;

void Logger::logToConsole(std::string message)
{
    std::cout << makeLogEntry(message);
}

void Logger::logToFile(std::string message)
{
    std::fstream file;
    file.open("logs.log", std::fstream::out | std::fstream::app);
    file << makeLogEntry(message);
    file.close();
}

std::string Logger::makeLogEntry(std::string message)
{
    std::stringstream ss;
    time_t raw;
    struct tm *t;

    time(&raw);
    t = localtime(&raw);

    ss << "[";
    ss << std::setfill('0') << std::setw(4) << t->tm_year + 1900;
    ss << "/";
    ss << std::setfill('0') << std::setw(2) << t->tm_mon + 1;
    ss << "/";
    ss << std::setfill('0') << std::setw(2) << t->tm_mday;
    ss << " ";
    ss << std::setfill('0') << std::setw(2) << t->tm_hour;
    ss << ":";
    ss << std::setfill('0') << std::setw(2) << t->tm_min;
    ss << ":";
    ss << std::setfill('0') << std::setw(2) << t->tm_sec;
    ss << "] " << message << std::endl;

    return ss.str();
}

void Logger::log(const std::string &dest, const std::string &message)
{
    for (int i = 0; i < Logger::vtab_len; i++)
    {
        Logger::vtab_entry e = vtab[i];
        if (e.name == dest)
        {
            (this->*e.fn)(message);
            return;
        }
    }
}