#include "ClapTrap.hpp"

// definition of member function

void ClapTrap::attack(const std::string& target) {
    if (getEnergyPoints() != 0) {
        std::cout << std::endl << "ClapTrap " << name <<  " attacks"<< target << ", causing " << AttackDamage <<  " points of damage" << std::endl;
        this->EnergyPoints--;
    }
};

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << std::endl << "ClapTrap " << name << " take damage losing " << amount << " point" << std::endl;
    this->HitPoints -= amount;
};

void ClapTrap::beRepaired(unsigned int amount) {
    if (getEnergyPoints() != 0) {
        std::cout << std::endl << "ClapTrap " << getName() << " repear itself with " << amount << " point" << std::endl;
        this->HitPoints += amount;
        this->EnergyPoints--;
    }
};

std::string ClapTrap::getName() {
    return (this->name);
}

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

ClapTrap::ClapTrap() {
    std::cout << "default constructor called" << std::endl;
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
};

ClapTrap::ClapTrap(std::string Name) {
    std::cout << "copy constructor called" << std::endl;
    this->name = Name;
};

ClapTrap::~ClapTrap() {
    std::cout << "destructor called" << std::endl;
};