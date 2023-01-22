#include "Animal.hpp"

int main()
{
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	Dog yy;
	Dog *kk = new Dog();
	
	yy = *kk;
// ;	delete j;//should not create a leak
// 	delete i;
	return 0;
}