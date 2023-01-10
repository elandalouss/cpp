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
};

class HumanA {
	private :
		Weapon			&wpnA;
		std::string		name;
	public :
		void attack() {
			std::cout << name << " attacks with their " << wpnA.getType() << std::endl;
		}
		HumanA (std::string name, Weapon &wA){
			this->name = name;
			this->wpnA = wA; 
		}
};

class HumanB {
	private :
		Weapon			wpnB;
		std::string		name;
	public :
		void attack() {
			std::cout << name << " attacks with their " << wpnB.getType() << std::endl;
		}

};
 
