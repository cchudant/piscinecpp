#include "Pony.hpp"

int main()
{
    Pony *onTheHeap = ponyOnTheHeap();
    Pony onTheStack = ponyOnTheStack();
    delete onTheHeap;
}