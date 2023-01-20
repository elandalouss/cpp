#include "Animal.hpp"

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
        return (*this);
    this->type = other.type;
};

Animal::~Animal() {
    std::cout << "Distructor called from Animal class" << std::endl;
};

