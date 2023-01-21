#include "Animal.hpp"

// animal class 

Animal::Animal() {
    std::cout << "Default constructor called from Animal class" << std::endl;
};

Animal::Animal(const Animal& obj) {
    std::cout << "Default constructor called from Animal class" << std::endl;
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

//wrong animal

// wrongAnimal::wrongAnimal() {
//     std::cout << "Default constructor called from wrongAnimal class" << std::endl;
// };

// wrongAnimal::wrongAnimal(const wrongAnimal& obj) {
//     std::cout << "Default constructor called from wrongAnimal class" << std::endl;
//     this->type = obj.type;
// };

// wrongAnimal &wrongAnimal::operator=(const wrongAnimal& other) {
//     std::cout << "Copy assainement operator called from wrongAnimal class" << std::endl;
//     if (this == &other) 
//         return *this;
//     this->type = other.type;
//     return *this;
// };

// wrongAnimal::~wrongAnimal() {
//     std::cout << "Distructor called from wrongAnimal class" << std::endl;
// };

// std::string wrongAnimal::getType () const{
//     return type;
// };

// void wrongAnimal::makeSound() const {
//     std::cout << "wrong sound" << std::endl;
// };

// Dog class

Dog::Dog() {
    std::cout << "Default constructor called from Dog class" << std::endl;
    type = "Dog";
};

Dog::Dog(const Dog& obj) {
    std::cout << "Default constructor called from Dog class" << std::endl;
    this->type = obj.type;
};

Dog &Dog::operator=(const Dog& other) {
    std::cout << "Copy assainement operator called from Dog class" << std::endl;
    if (this == &other) 
        return *this;
    this->type = other.type;
    return *this;
};

Dog::~Dog() {
    std::cout << "Distructor called from Dog class" << std::endl;
};
void Dog::makeSound() const{
    std::cout << "how wow" << std::endl;
};

// Cat class

Cat::Cat() {
    std::cout << "Default constructor called from Cat class" << std::endl;
    type = "Cat";
};

Cat::Cat(const Cat& obj) {
    std::cout << "Default constructor called from Cat class" << std::endl;
    this->type = obj.type;
};

Cat &Cat::operator=(const Cat& other) {
    std::cout << "Copy assainement operator called from Cat class" << std::endl;
    if (this == &other) 
        return *this;
    this->type = other.type;
    return *this;
};

Cat::~Cat() {
    std::cout << "Distructor called from Cat class" << std::endl;
};

void Cat::makeSound() const{
    std::cout << "meaaw" << std::endl;
};

// wrong cat

// wrongCat::wrongCat() {
//     std::cout << "Default constructor called from wrongCat class" << std::endl;
//     type = "wrongCat";
// };

// wrongCat::wrongCat(const wrongCat& obj) {
//     std::cout << "Default constructor called from wrongCat class" << std::endl;
//     this->type = obj.type;
// };

// wrongCat &wrongCat::operator=(const wrongCat& other) {
//     std::cout << "Copy assainement operator called from wrongCat class" << std::endl;
//     if (this == &other) 
//         return *this;
//     this->type = other.type;
//     return *this;
// };

// wrongCat::~wrongCat() {
//     std::cout << "Distructor called from wrongCat class" << std::endl;
// };

// void wrongCat::makeSound() const{
//     std::cout << "wrong meaaw" << std::endl;
// };