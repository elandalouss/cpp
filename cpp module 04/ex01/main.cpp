#include "Animal.hpp"

int main()
{
	Animal *obj[10];

	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) 
			obj[i] = new Dog();
		else
			obj[i] = new Cat();
	}
	for (int i = 0; i < 10; i++)
		delete obj[i];
	return 0;
}