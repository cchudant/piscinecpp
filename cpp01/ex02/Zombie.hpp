class Zombie
{
        std::string _type, _name;
    public:
        Zombie(std::string type, std::string name);
        std::string getType() const;
        std::string getName() const;
        void announce() const;
}
