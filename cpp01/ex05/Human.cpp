#include <string>
#include "Human.hpp"

std::string Human::identify() const
{
    return _brain.identify();
}

Brain &Human::getBrain()
{
    return _brain;
}