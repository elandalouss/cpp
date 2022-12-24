#include <iostream>

class Weapon {
    private:
        std::str    e;
    public:
        void    Weapon(std::string);
        void    setType(std::string  sType)
        {
            type = sType;
        }
        std::string getType()
        {
            return type;
        }
};

class HumanA {
    std::string name;
    Weapon      ObjA;
    void    attack()
    {
        std::cout << name << " attacks with their " << "tmp" << std::endl;
    }
};

class HumanB {
    std::string name;
    Weapon      ObjB;
    void    attack()
    {
        std::cout << name << " attacks with their " << "tmp" << std::endl;
    }
};

int main()
{
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();

    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
    return 0;
}