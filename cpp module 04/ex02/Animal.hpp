#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include "Brain.hpp"

class Animal{
    protected :
        std::string type;
    public :
        Animal();
        Animal(const Animal& obj);
        Animal &operator=(const Animal& other);
        ~Animal();
        virtual std::string     getType() const;
        virtual void    makeSound()const = 0;
};

class Dog : public Animal {
    public :
        Dog();
        Dog(const Dog& obj);
        Dog &operator=(const Dog& other);
        ~Dog();
        void makeSound() const;
    private :
        Brain *att;
};

class Cat : public Animal {
    public :
        Cat();
        Cat(const Cat& obj);
        Cat &operator=(const Cat& other);
        ~Cat();
        void makeSound() const ;
    private :
        Brain *att;
};

// class wrongAnimal{
//     protected :
//         std::string type;
//     public :
//         wrongAnimal();
//         wrongAnimal(const wrongAnimal& obj);
//         wrongAnimal &operator=(const wrongAnimal& other);
//         ~wrongAnimal();
//         std::string     getType() const;
//         virtual void    makeSound()const ;
// };

// class wrongCat : public wrongAnimal {
//     public :
//         wrongCat();
//         wrongCat(const wrongCat& obj);
//         wrongCat &operator=(const wrongCat& other);
//         ~wrongCat();
//         void makeSound() const ;
// };

#endif