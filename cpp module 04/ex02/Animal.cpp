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
// Dog class

Dog::Dog() {
    std::cout << "Default constructor called from Dog class" << std::endl;
    type = "Dog";
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
};

void Cat::makeSound() const{
    std::cout << "meaaw" << std::endl;
};
