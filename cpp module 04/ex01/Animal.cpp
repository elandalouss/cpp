/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelandal <aelandal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:40:43 by aelandal          #+#    #+#             */
/*   Updated: 2023/02/01 18:40:44 by aelandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

// animal class 

Animal::Animal() {
    std::cout << "Default constructor called from Animal class" << std::endl;
};

Animal::Animal(const Animal& obj) {
    std::cout << "Copy constructor called from Animal class" << std::endl;
    this->type = obj.type;
};

Animal &Animal::operator=(const Animal& other) {
    std::cout << "Copy assainement operator called from Animal class" << std::endl;
    if (this == &other) 
        return *this;
    this->type = other.type;
    return *this;
};

Animal::~Animal() {
    std::cout << "Distructor called from Animal class" << std::endl;
};

std::string Animal::getType () const{
    return type;
};

void Animal::makeSound() const {
    std::cout << "sound" << std::endl;
};


Dog::Dog() {
    std::cout << "Default constructor called from Dog class" << std::endl;
    type = "Dog";
    this->att = new Brain();
};

Dog::Dog(const Dog& obj) {
    std::cout << "Copy constructor called from Dog class" << std::endl;
    this->type = obj.type;
    this->att = new Brain();
    *(this->att) = *(obj.att);
};

Dog &Dog::operator=(const Dog& other) {
    std::cout << "Copy assainement operator called from Dog class" << std::endl;
    if (this == &other) 
        return *this;
    this->type = other.type;
    if (this->att == NULL) {
        this->att = new Brain();
        *(this->att) = *(other.att);
    } else 
        *(this->att) = *(other.att);
    return *this;
};

Dog::~Dog() {
    std::cout << "Distructor called from Dog class" << std::endl;
    delete this->att;
};
void Dog::makeSound() const{
    std::cout << "how wow" << std::endl;
};

// Cat class

Cat::Cat() {
    std::cout << "Default constructor called from Cat class" << std::endl;
    type = "Cat";
    this->att = new Brain();
};

Cat::Cat(const Cat& obj) {
    std::cout << "Copy constructor called from Cat class" << std::endl;
    this->type = obj.type;
    this->att = new Brain();
    *(this->att) = *(obj.att);
};

Cat &Cat::operator=(const Cat& other) {
    std::cout << "Copy assainement operator called from Cat class" << std::endl;
    if (this == &other) 
        return *this;
    this->type = other.type;
    if (this->att == NULL) {
        this->att = new Brain();
        *(this->att) = *(other.att);
    } else 
        *(this->att) = *(other.att);
    return *this;
};

Cat::~Cat() {
    std::cout << "Distructor called from Cat class" << std::endl;
    delete this->att;
};

void Cat::makeSound() const{
    std::cout << "meaaw" << std::endl;
};
