#include <iostream>

class Weapon{
    private :
        std::string type;
    public :
        void setType(std::string    weaponType) {
            type = weaponType;
        }

        std::string getType() {
            return (type);
        }
		Weapon (std::string typeName) {
			type = typeName;
		}
};

class HumanA {
	private :
		std::string		name;
		Weapon			&wpnA;
	public :
		void attack() {
			std::cout << name << " attacks with their " << wpnA.getType() << std::endl;
		}
		HumanA (std::string name, Weapon &wA) : name(name) , wpnA(wA){}
};

class HumanB {
	private :
		std::string		name;
		Weapon			*wpnB;
	public :
		void attack() {
			std::cout << name << " attacks with their " << wpnB->getType() << std::endl;
		}
			HumanB (std::string name){
			this->name = name;
			this->wpnB = NULL;
		}
		void setWeapon(Weapon	&wpn) {
			this->wpnB = &wpn;
		}
};

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}

	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return (0);
}