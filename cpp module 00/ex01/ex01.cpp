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

int i = 0;

void putDot(std::string	str)
{
	if (str.length() > 10)
		std::cout << ".";
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
				std::cout << "should entre a number" << std::endl;
				exit(0);
			}
			cnt[i].setData(firstName, lastName, nickName, phoneNumber);
			if (i == 7)
				i = -1;
			i++;
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
	std::string		cmd;
	PhoneBook		data;
	int				i, index;

	i = 0;
	while(true)
	{
		std::cin >> cmd;
		if (cmd.compare("ADD") == 0)
			data.fillClass();
		if (cmd.compare("SEARCH") == 0)
		{

			std::cout << "Enter The Index Of The Contact : ";
			std::cin >> index;
			if (std::cin.fail())
			{
				std::cout << "should entre a number" << std::endl;
				return (0);
			}
			if (index <= 7)
				data.getInfo(index);
			else
				std::cout << "max contact can store is 7" << std::endl;
		}
		if (cmd.compare("EXIT") == 0)
			exit(0);
	}
}