#include "ScavTrap.hpp"

//definition of member functions

void ScavTrap::guardGate() {
    std::cout << "ScavTrap is now in gate keeper mode." << std::endl;
};

void ScavTrap::attack (const std::string &target) {
    if (getEnergyPoints() != 0) {
        std::cout << std::endl << "ScavTrap " << name <<  " attacks "<< target << ", causing " << AttackDamage <<  " points of damage" << std::endl;
        this->EnergyPoints--;
    }
};


// definition of constructors and destructor

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

ScavTrap &ScavTrap::operator=(const ScavTrap& other) {
    std::cout << "Copy assainement operator from ScavTrap called" << std::endl;
    if (this == &other)
        return *this;
    this->AttackDamage = other.AttackDamage;
    this->EnergyPoints = other.EnergyPoints;
    this->HitPoints = other.HitPoints;
    return *this;
};

ScavTrap::ScavTrap(const ScavTrap& obj) {
    std::cout << "Copy constructor from ScavTrap called" << std::endl;
    this->AttackDamage = obj.AttackDamage;
    this->EnergyPoints = obj.EnergyPoints;
    this->HitPoints = obj.HitPoints;
};

ScavTrap::~ScavTrap () {
    std::cout << "Destructor from ScavTrap called" << std::endl;  
};
