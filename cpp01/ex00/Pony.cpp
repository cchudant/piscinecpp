#include "Pony.hpp"

Pony *ponyOnTheHeap()
{
    return new Pony();
}

Pony ponyOnTheStack()
{
    Pony pony{};
    return pony;
}