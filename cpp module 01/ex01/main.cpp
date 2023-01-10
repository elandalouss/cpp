#include <iostream>

class Zombie{
    private:
        std::string	name;
    public:
		~Zombie() {
			std::cout << name << " has destroyed" << std::endl;
		}
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
	
	zombieObj = zombieHorde(8, "zombozo");
	tester(zombieObj, 8);

	delete[] zombieObj;
    return 0;
}