#include "Harl.h"

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