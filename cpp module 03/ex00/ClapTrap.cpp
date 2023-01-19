#include "ClapTrap.hpp"

// definition of member function

void ClapTrap::attack(const std::string& target) {
    std::cout << "ClapTrap " << name <<  "attacks"<< target << ", causing " << AttackDamage <<  "points of damage" << std::endl;
};

void ClapTrap::takeDamage(unsigned int amount) {
    
};

void ClapTrap::beRepaired(unsigned int amount) {

};

int ClapTrap::getHitPoints() {
    return (this->HitPoints);
}

int ClapTrap::getEnergyPoints() {
    return (this->EnergyPoints);
}

int ClapTrap::getAttackDamage() {
    return (this->AttackDamage);
}

//defenition of constructor and destructor

ClapTrap::ClapTrap(std::string Name) {
    std::cout << "constructor called" << std::endl;
    this->name = Name;
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
};

ClapTrap::~ClapTrap() {
    std::cout << "destructor called" << std::endl;
};