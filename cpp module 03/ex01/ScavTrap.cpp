#include "ScavTrap.hpp"

void ScavTrap::guardGate() {
    std::cout << "ScavTrap is now in gate keepler mode." << std::endl;
};

ScavTrap::ScavTrap() {
    std::cout << "Default constructor called" << std::endl;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
};


ScavTrap::ScavTrap(std::string Name) {
    std::cout << "constructor called" << std::endl;
    this->name = Name;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
};

// ScavTrap::ScavTrap(const ScavTrap& obj) {
//     std::cout << "copy constructor called" << std::endl;
//     *this = obj;
//}

