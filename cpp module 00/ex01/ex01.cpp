#include <iostream>

int ft_strcmp(std::string s1, std::string s2)
{
	int i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

class phonebook{
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

int main ()
{
	std::string		cmd;
	int				i, index;
	phonebook		data[8];

	i = 0;
	while(true)
	{
		std::cin >> cmd;
		if (ft_strcmp(cmd, "ADD") == 0)
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
			data[i].setData(firstName, lastName, nickName, phoneNumber);
			if (i == 7)
				i = -1;
			i++;
		}
		if (ft_strcmp(cmd, "SEARCH") == 0)
		{
			std::cout << "Enter The Index Of The Contact : ";
			std::cin >> index;

			std::cout << index << " | " << data[index].getFirstName() << " | ";
			std::cout << data[index].getLastName() << " | " << data[index].getNeckNameName();
		}
		if (ft_strcmp(cmd, "EXIT") == 0)
			exit(0);
	}
}