#include "Logger.hpp"

int main()
{
    Logger log;

    log.log("console", "Log to console!");
    log.log("file", "Log to file!");
    log.log("console", "Ayaya!");
    log.log("file", "Wow!");
}