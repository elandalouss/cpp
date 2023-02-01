/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:40:40 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/01 18:40:41 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        virtual ~Animal();
        std::string     getType() const;
        virtual void    makeSound()const;
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
#endif