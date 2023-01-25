#include "Harl.h"

int main() { 
	std::string	cmd;
	Harl		obj1;

    obj1.complain("hello");

	while (true) {
		std::cout << "Enter you're command please : ";
		getline(std::cin, cmd);
		if (std::cin.eof()) exit(0);
		while (cmd.length() == 0) {
			std::cout << "Enter you're command please : ";
			getline(std::cin, cmd);
			if (std::cin.eof()) exit(0);
		}
        obj1.complain(cmd);
    }

    return 0;
}
