#include <string>
#include "Brain.hpp"

class Human
{
        Brain _brain;
    public:
        std::string identify() const;
        Brain &getBrain();
};