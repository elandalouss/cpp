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

Zombie* newZombie(std::string name)
{
	Zombie	*minizombie;

	minizombie = new Zombie();
	minizombie->setName(name);
	return minizombie;
}

void randomChump(std::string name)
{
	Zombie	miniZombie;

	miniZombie.setName(name);
	miniZombie.announce();
}
// my main

int main() {
	Zombie *new_zombie;
	std::string zombie_name;

	std::cout << "enter the zombie name : ";
	std::cin >> zombie_name;
	new_zombie = newZombie(zombie_name);
	new_zombie->announce();
	randomChump(zombie_name);
	delete(new_zombie);
	std::cout << "the zombie " << zombie_name << " has destroyed" << std::endl;
	std::cout << "the zombie " << zombie_name << " has destroyed" << std::endl;
    return 0;
}
// laila's main

int main()
{

  Zombie* zum = newZombie("alex");
  zum->announce();
  Zombie* z = newZombie("Foooo");
  z->announce();
  randomChump("laila");

  delete zum;
  delete z;
}
