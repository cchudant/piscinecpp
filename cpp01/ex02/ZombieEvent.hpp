#include "Zombie.hpp"

class ZombieEvent {
        std::string _type;
    public:
        ZombieEvent(std::string type);
        void setZombieType(std::string type);
        std::string getZombieType() const;
        Zombie *newZombie(std::string name) const;
        void randomChump() const;
}
