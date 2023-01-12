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
			int a = !level.compare("DEBUG");
			a = (!level.compare("INFO")) * 10;
			a += (!level.compare("WARNING")) * 100;
			a += (!level.compare("ERROR")) * 1000;
			std::cout << std::endl << a << std::endl;
			switch (a)
			{
			case 0:
				this->debug();
				break;
			case 10:
				this->info();
				break;
			case 100:
			this->warning();
				break;
			case 1000:
				this->error();
				break;
			}
		}
};


int main() {
	std::string	cmd;
	Harl		obj1;

	while (true) {
		std::cout << "Enter you're command please : ";
		std::cin >> cmd;
		if (std::cin.fail()) {
			std::cerr << "enter a valid command [DEBUG], [INFO], [WARNING], [ERROR]" << std::endl;
			std::cin.clear();
			return 0;
		} else if (cmd.compare("DEBUG") == 0) {
			obj1.complain(cmd);
		} else if (cmd.compare("INFO") == 0) {
			obj1.complain(cmd);
		} else if (cmd.compare("WARNING") == 0) {
			obj1.complain(cmd);
		} else if (cmd.compare("ERROR") == 0) {
			obj1.complain(cmd);
		} else {
			std::cout << "enter a valid command [DEBUG], [INFO], [WARNING], [ERROR]" << std::endl;
		}
	}

    return 0;
}