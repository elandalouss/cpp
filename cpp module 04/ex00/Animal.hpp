/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:49:42 by aelandal          #+#    #+#             */
/*   Updated: 2023/01/30 19:44:27 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        virtual ~Animal();
        std::string     getType() const;
        virtual void    makeSound()const ;
};

class Dog : public Animal {
    public :
        Dog();
        Dog(const Dog& obj);
        Dog &operator=(const Dog& other);
        ~Dog();
        void makeSound() const;
};

class Cat : public Animal {
    public :
        Cat();
        Cat(const Cat& obj);
        Cat &operator=(const Cat& other);
        ~Cat();
        void makeSound() const ;
};

class wrongAnimal{
    protected :
        std::string type;
    public :
        wrongAnimal();
        wrongAnimal(const wrongAnimal& obj);
        wrongAnimal &operator=(const wrongAnimal& other);
        ~wrongAnimal();
        std::string     getType() const;
        void    makeSound()const ;
};

class wrongCat : public wrongAnimal {
    public :
        wrongCat();
        wrongCat(const wrongCat& obj);
        wrongCat &operator=(const wrongCat& other);
        ~wrongCat();
        void makeSound() const ;
};

#endif