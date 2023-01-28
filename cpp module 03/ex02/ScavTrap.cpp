#include "ScavTrap.hpp"

// definition of member function

void ScavTrap::attack (const std::string &target) {
    std::cout << "Copy assainement operator from ScavTrap called" << std::endl;
    if (getEnergyPoints() != 0) {
        std::cout << std::endl << "ScavTrap " << name <<  " attacks "<< target << ", causing " << AttackDamage <<  " points of damage" << std::endl;
        this->EnergyPoints--;
    }
};

void ScavTrap::takeDamage(unsigned int amount) {
    std::cout << std::endl << "ScavTrap " << name << " take damage losing " << amount << " point" << std::endl;
    this->HitPoints -= amount;
};

void ScavTrap::beRepaired(unsigned int amount) {
    if (getEnergyPoints() != 0) {
        std::cout << std::endl << "ScavTrap " << getName() << " repear itself with " << amount << " point" << std::endl;
        this->HitPoints += amount;
        this->EnergyPoints--;
    }
};

void ScavTrap::guardGate() {
    std::cout << "ScavTrap is now in gate keeper mode." << std::endl;
};

// definition of constructors and distructor

ScavTrap::ScavTrap() {
    std::cout << "Default constructor from ScavTrap called" << std::endl;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
};


ScavTrap::ScavTrap(std::string Name) {
    std::cout << "Parameterized constructor from ScavTrap called" << std::endl;
    this->name = Name;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
};

ScavTrap::ScavTrap(const ScavTrap& obj) {
    std::cout << "Copy constructor from ScavTrap called" << std::endl;
    this->AttackDamage = obj.AttackDamage;
    this->EnergyPoints = obj.EnergyPoints;
    this->HitPoints = obj.HitPoints;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& other) {
    std::cout << "Copy assainement operator from ScavTrap called" << std::endl;
    if (this == &other)
        return *this;
    this->AttackDamage = other.AttackDamage;
    this->EnergyPoints = other.EnergyPoints;
    this->HitPoints = other.HitPoints;
    return *this;
};


ScavTrap::~ScavTrap() {
    std::cout << "Distructor from ScavTrap called" << std::endl;
};
