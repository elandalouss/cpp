#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

class Animal{
    protected :
        std::string type;
    public :
        Animal();
        Animal(const Animal& obj);
        Animal &operator=(const Animal& other);
        ~Animal();
};

class Dog : public Animal {

};

class Cat : public Animal {

};

#endif