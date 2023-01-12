#include <iostream>

class Harl {
    private :
    	void debug(void) {
			std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
		}
       void info(void) {
			std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
		}
       void warning(void) {
			std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming foryears whereas you started working here since last month." << std::endl;
		}
       void error(void) {
			std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	   }
	public :
		void complain(std::string level) {

            void (Harl::*func[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

		
        
			int a = 0;
            a = level.compare("DEBUG") + 1;
            std::cout << a << std::endl;
			// a += (!level.compare("INFO")) * 10;
			// a += (!level.compare("WARNING")) * 100;
			// a += (!level.compare("ERROR")) * 1000;
			switch (a)
			{
                case 1:
                    (this->*func[0])();
                    break;
                case 16:
                    (this->*func[1])();
                    break;
                case 120:
                    (this->*func[2])();
                    break;
                case 1002:
                    (this->*func[3])();
                    break;
		    }
        }
};


int main() { 
	std::string	cmd;
	Harl		obj1;

    obj1.complain("hello");

	while (true) {
		std::cout << "Enter you're command please : ";
		std::cin >> cmd;
		if (std::cin.fail()) {
			std::cerr << "enter a valid command [DEBUG], [INFO], [WARNING], [ERROR]" << std::endl;
			std::cin.clear();
			return 0;
		}
        obj1.complain(cmd);
    }

    return 0;
}