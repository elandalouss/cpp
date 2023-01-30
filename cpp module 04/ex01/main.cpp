#include "Animal.hpp"

int main()
{

	Animal *obj = new Animal[10];

	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			new(&obj[i]) Dog();
		else
			new(&obj[i]) Cat();
	}
	delete [] obj;
	return 0;
}