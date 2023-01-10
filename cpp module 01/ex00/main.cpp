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
		~Zombie() {
			std::cout << "the zombie " << name << " has destroyed" << std::endl;
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

int main() {
	Zombie *new_zombie;

	new_zombie = newZombie("za3tot");
	new_zombie->announce();
	randomChump("za3tot a5or");

	delete(new_zombie);
    return 0;
}
