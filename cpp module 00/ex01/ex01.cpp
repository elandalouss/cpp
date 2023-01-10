#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <ctype.h>

int i = 0;

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

void	colomsManager(std::string	str) {
	if (str.length() >= 10)
	{
		std::cout << str.substr(0, 9);
		putDot(str);
	}
	else
		std::cout << std::setw(10) << str;
}

class PhoneBook{
	private :
		Contact	cnt[8];
	public :
		void fillClass() {
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
				std::cout << std::endl << "should entre a number" << std::endl << std::endl;
				std::cin.clear();
				return ; // should not exit from the progam
			}
			cnt[i].setData(firstName, lastName, nickName, phoneNumber);
			if (i == 7)
				i = -1;
			i++;
		}

		void	contactTable()
		{
			int it = 0;
			std::cout << std::endl;
			std::cout << std::setw(10) << "index ___ |";
			std::cout << std::setw(10) << "first name";
				std::cout << "|";
			std::cout << std::setw(10) << "last name";
				std::cout << "|";
			std::cout << std::setw(10) << "nickname";
				std::cout << "|" << std::endl;
			while (8 > it)
			{
				std::cout << "____________________________________________" << std::endl;
				std::cout << std::setw(10) << it;
				std::cout << "|";
				colomsManager(cnt[it].getFirstName());
				std::cout << "|";
				colomsManager(cnt[it].getLastName());
				std::cout << "|";
				colomsManager(cnt[it].getNeckNameName());
				std::cout << "|"<< std::endl;
				it++;
			}
			std::cout << "____________________________________________" << std::endl;
		}

		void getInfo(int index)
		{
			std::cout << index << "|" << std::setw(10) << cnt[index].getFirstName().substr(0, 9);
			putDot(cnt[index].getFirstName());
			std::cout << "|" << std::setw(10) << cnt[index].getLastName().substr(0, 9);
			putDot(cnt[index].getLastName());
			std::cout << "|" << std::setw(10) << cnt[index].getNeckNameName().substr(0, 9);
			putDot(cnt[index].getNeckNameName());
			std::cout << "|" << std::endl;
		}
};

int main()
{
	std::string		cmd, indexStr;
	PhoneBook		data;
	int				index;

	std::cout << "====>  Enter a valid command [ADD, SEARCH, EXIT]" << std::endl;
	while(true)
	{
		std::cin >> cmd;
		if (cmd.compare("ADD") == 0){
			data.fillClass();
		}
		else if (cmd.compare("SEARCH") == 0)
		{
			data.contactTable();
			std::cout << "Enter The Index Of The Contact : ";
			std::cin >> index;
			if (std::cin.fail() || index > 7 || index < 0)
			{
				std::cout << std::endl << "should entre a number between 0 and 7" << std::endl << std::endl;
				std::cin.clear();
			}
			else if (index <= 7)
				data.getInfo(index);
		}
		else if (cmd.compare("EXIT") == 0)
			exit(1);
		else
			std::cout << "====>  Enter a valid command [ADD, SEARCH, EXIT]" << std::endl;
	}
}