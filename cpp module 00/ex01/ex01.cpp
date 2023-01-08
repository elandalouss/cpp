#include <iostream>
#include <iomanip>

class Contact{
	private :

		std::string firstName, lastName, nickName;
		int			phoneNumber;
	public :
		void	setData(std::string fn, std::string ln, std::string nn, int phNbr) {
			firstName = fn;
			lastName = ln;
			nickName = nn;
			phoneNumber = phNbr;
		}
		std::string	getFirstName() {
			return firstName;
		}
		std::string	getLastName() {
			return lastName;
		}
		std::string	getNeckNameName() {
			return nickName;
		}
};

void putDot(std::string	str)
{
	if (str.length() > 10)
		std::cout << ".";
}

int main ()
{
	std::string		cmd;
	Contact			data[8];
	int				i, index;

	i = 0;
	while(true)
	{
		std::cin >> cmd;
		if (cmd.compare("ADD") == 0)
		{
			std::string firstName, lastName, nickName;
			int	phoneNumber;
			std::cout << "Enter your firstName : ";
			std::cin >> firstName;
			std::cout << "Enter your lastName : ";
			std::cin >> lastName;
			std::cout << "Enter your nickName : ";
			std::cin >> nickName;
			std::cout << "Enter your phoneNumber : ";
			std::cin >> phoneNumber;
			if (std::cin.fail())
			{
				std::cout << "should entre a number" << std::endl;
				exit(0);
			}
			data[i].setData(firstName, lastName, nickName, phoneNumber);
			if (i == 7)
				i = -1;
			i++;
		}
		if (cmd.compare("SEARCH") == 0)
		{
			std::cout << "Enter The Index Of The Contact : ";
			std::cin >> index;
			if (std::cin.fail())
			{
				std::cout << "should entre a number" << std::endl;
				exit(0);
			}
			if (index <= 7)
			{
				std::cout << index << " | " << std::setw(10) << data[index].getFirstName().substr(0, 9);
				putDot(data[index].getFirstName());
				std::cout << " | " << std::setw(10) << data[index].getLastName().substr(0, 9);
				putDot(data[index].getLastName());
				std::cout << " | " << std::setw(10) << data[index].getNeckNameName().substr(0, 9);
				putDot(data[index].getNeckNameName());
				std::cout << std::endl;
			}
			else
				std::cout << "max contact can store is 7" << std::endl;
		}
		if (cmd.compare("EXIT") == 0)
			exit(0);
	}
}