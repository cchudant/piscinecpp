#include <cstdlib>
#include "ZombieEvent.hpp"

const std::string NAMES[] = {
    "Joe \"Chomped a Bear\" Walker",
    "Andy \"Nibbled a Pigeon\" Edwards",
    "Brian \"Bit a Rat\" Roberts",
    "Dave \"Crushed a Toe\" Jones",
    "Brian \"Munched a Bear\" Brown",
    "James \"Scoffed a Radio\" Lee",
    "Bill \"Bit a Hand\" Thomas",
    "Pete \"Munched a Rat\" Miller",
    "Jack \"Nibbled a Hand\" Green",
    "Brian \"Crushed a Squirrel\" Green",
}

static std::string getRandomName()
{
    return (NAMES[rand() % 10]);
}

ZombieEvent::ZombieEvent(std::string type)
{
    _type = type;
}

Zombie *ZombieEvent::newZombie(std::string name) const
{
    return new Zombie(_type, name);
}

void ZombieEvent::setZombieType(std::string type)
{
    _type = type;
}

std::string ZombieEvent::getZombieType() const
{
    return _type;
}

void ZombieEvent::randomChump() const
{
    Zombie zombie(_type, getRandomName());
    zombie.announce();
}