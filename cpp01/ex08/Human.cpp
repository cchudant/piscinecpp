#include <iostream>
#include "Human.hpp"

const Human::vtab_entry Human::vtab[] =
{
    { "meleeAttack", &Human::meleeAttack },
    { "rangedAttack", &Human::rangedAttack },
    { "intimidatingShout", &Human::intimidatingShout },
};
const int Human::vtab_len = 3;

void Human::meleeAttack(const std::string &target)
{
    std::cout << "Melee attack on " << target << std::endl;
}

void Human::rangedAttack(const std::string &target)
{
    std::cout << "Ranged attack on " << target << std::endl;
}

void Human::intimidatingShout(const std::string &target)
{
    std::cout << "Intimidating shout on " << target << std::endl;
}

void Human::action(const std::string &action_name, const std::string &target)
{
    for (int i = 0; i < Human::vtab_len; i++)
    {
        Human::vtab_entry e = Human::vtab[i];
        if (action_name == e.name)
        {
            (this->*e.fn)(target);
            break;
        }
    }
}
