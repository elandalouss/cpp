#include <iostream>

class Zombie{
    private:
        std::string	name;
    public:
        void	announce(void){
			std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
		}
		void setName(std::string tmp_name)
		{
			name = tmp_name;
		}
		std::string getName()
		{
			return (name);
		}
};

void tester(Zombie	*zombieObj, int N)
{
	for (int i = 0; i < N; i++)
		zombieObj[i].announce();
}

Zombie* zombieHorde(int N, std::string name)
{
    Zombie	*zombieObj;

	zombieObj = new Zombie [N];
	for (int i = 0; i < N; i++)
		zombieObj[i].setName(name);
	return (zombieObj);
}

int main()
{
	Zombie	*zombieObj;
	std::string	name;
	int	zombiesNumber;
	
	std::cout << "Enter the name of the zombies : ";
	std::cin >> name;

	std::cout << "Enter the number of the zombies : ";
	std::cin >> zombiesNumber;

	zombieObj = zombieHorde(zombiesNumber, name);
	tester(zombieObj, zombiesNumber);

	delete[] zombieObj;
    return 0;
}