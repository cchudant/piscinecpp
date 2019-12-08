#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string.h>
# include "Weapon.hpp"

class HumanA
{
        std::string name;
        Weapon *weapon;
    public:
        HumanA(std::string name, Weapon &weapon);
        HumanA(std::string name);
        void setName(std::string name);
        std::string getName() const;
        void setWeapon(Weapon &weapon);
        void attack() const;
};

#endif
