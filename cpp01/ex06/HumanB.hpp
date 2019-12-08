#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string.h>
# include "Weapon.hpp"

class HumanB
{
        std::string name;
        Weapon *weapon;
    public:
        HumanB(std::string name, Weapon &weapon);
        HumanB(std::string name);
        void setName(std::string name);
        std::string getName() const;
        void setWeapon(Weapon &weapon);
        void attack() const;
};

#endif
