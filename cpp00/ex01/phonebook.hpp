#include <string>

class Contact {
    public:
        std::string first_name, last_name, nickname, login, postal_address,
            phone_number, birthday_date, favorite_meal, underwear_color,
            darkest_secret;

        Contact();
        void ask();
        void display_compact(int index);
        void display();
};
