#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Default constructor called from Brain class" << std::endl;
};

Brain::Brain(const Brain& obj) {
    std::cout << "Copy constructor called from Brain class" << std::endl;
    // this->ideas = obj.ideas;
};

Brain &Brain::operator=(const Brain& other) {
    std::cout << "Copy assainement operator called from Brain class" << std::endl;
    if (this == &other)
        return *this;
    // this->ideas = other.ideas;
    return *this;
};

Brain::~Brain() {
    std::cout << "Destructor called from Brain class" << std::endl;
};

