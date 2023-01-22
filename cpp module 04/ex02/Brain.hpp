#ifndef BRAIN_H
#define BRAIN_H
#include <iostream>
#include "Brain.hpp"
class Brain {
    private :
        std::string ideas[100];
    public :
        Brain();
        Brain(const Brain& obj);
        Brain &operator=(const Brain& other);
        ~Brain();
};

#endif