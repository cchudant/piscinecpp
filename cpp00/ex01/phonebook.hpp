#include <string>

class Contact {
        static int next_index;
        int index;
    public:
        std::string first_name, last_name, nickname, login, postal_address,
            phone_number, birthday_date, favorite_meal, underwear_color,
            darkest_secret;
        Contact *next;

        Contact(Contact *&next);
        void display_compact();
        void display();
        int get_index();
};
