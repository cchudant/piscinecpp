#ifndef HUMAN_CPP
# define HUMAN_CPP

# include <string>



class Human
{
    private:
        void meleeAttack(const std::string &target);
        void rangedAttack(const std::string &target);
        void intimidatingShout(const std::string &target);

        struct vtab_entry
        {
            std::string name;
            void (Human::*fn)(const std::string &target);
        };

        static const vtab_entry vtab[];
        static const int vtab_len;

    public:
        void action(const std::string &action_name, const std::string &target);
};

#endif
