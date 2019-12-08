#include <iostream>
#include <sstream>
#include "Brain.hpp"

std::string Brain::identify() const
{
    std::stringstream ss;
    ss << std::hex << std::showbase << (unsigned long)this;
    return (ss.str());
}
