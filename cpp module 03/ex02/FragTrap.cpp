#include "FragTrap.hpp"

// definition of member functions

void FragTrap::highFivesGuys(void) {
    std::cout << "high fives" << std::endl;
};

// definition of constructors and destructor

FragTrap::FragTrap() {
    std::cout << "Default constructor from FragTrap called" << std::endl;
   this->HitPoints = ClapTrap::HitPoints;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
};

FragTrap::FragTrap(std::string Name) {
    std::cout << "Parameterized constructor from FragTrap called" << std::endl;
    this->name = Name;
    this->HitPoints = ClapTrap::HitPoints;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
};

FragTrap::FragTrap(const FragTrap& obj) {
    std::cout << "Copy constructor from FragTrap called" << std::endl;
    this->AttackDamage = obj.AttackDamage;
    this->EnergyPoints = obj.EnergyPoints;
    this->HitPoints = obj.HitPoints;
    this->name = obj.name;
};

FragTrap &FragTrap::operator=(const FragTrap& other) {
    std::cout << "Copy assainement operator from FragTrap called" << std::endl;
    if (this == &other)
        return *this;
    this->AttackDamage = other.AttackDamage;
    this->EnergyPoints = other.EnergyPoints;
    this->HitPoints = other.HitPoints;
    this->name = other.name;
    return *this;
};

FragTrap::~FragTrap() {
    std::cout << "Destructor from FragTrap called" << std::endl;
};
