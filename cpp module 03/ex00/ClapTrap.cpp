#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target) {
    return ;
};

void ClapTrap::takeDamage(unsigned int amount) {
    return ;
};

void ClapTrap::beRepaired(unsigned int amount) {
    return ;
};

ClapTrap::ClapTrap() {
    std::cout << "constructor called" << std::endl;
};

ClapTrap::~ClapTrap() {
    std::cout << "destructor called" << std::endl;
};