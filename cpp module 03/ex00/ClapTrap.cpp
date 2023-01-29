
#include "ClapTrap.hpp"

// definition of member function

void ClapTrap::attack(const std::string& target) {
    if (getEnergyPoints() != 0) {
        std::cout << std::endl << "ClapTrap " << name <<  " attacks "<< target << ", causing " << AttackDamage <<  " points of damage" << std::endl;
        this->EnergyPoints--;
    }
};

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << std::endl << name << " take damage losing " << amount << " point" << std::endl;
    this->HitPoints -= amount;
};

void ClapTrap::beRepaired(unsigned int amount) {
    if (getEnergyPoints() != 0) {
        std::cout << std::endl << getName() << " repear itself with " << amount << " point" << std::endl;
        this->HitPoints += amount;
        this->EnergyPoints--;
    }
};

//definition of getters and setter

std::string ClapTrap::getName() const{
    return (this->name);
}

int ClapTrap::getHitPoints() const{
    return (this->HitPoints);
}

int ClapTrap::getEnergyPoints() const{
    return (this->EnergyPoints);
}

int ClapTrap::getAttackDamage() const{
    return (this->AttackDamage);
}

void	ClapTrap::setName(std::string Name) {
	name = Name;
};


//definition of constructor and destructor


ClapTrap::ClapTrap() {
    std::cout << "Default constructor from ClapTrap called" << std::endl;
    this->name = "unnamed";
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
};

ClapTrap::ClapTrap(std::string Name) {
    std::cout << "Parameterized constructor from ClapTrap called" << std::endl;
    this->name = Name;
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
};

ClapTrap::ClapTrap(const ClapTrap &obj) {
    std::cout << "Copy constructor from ClapTrap called" << std::endl;    
    std::cout << "Copy constructor from ClapTrap called" << std::endl;    
    std::cout << "Copy constructor from ClapTrap called" << std::endl;    
    std::cout << "Copy constructor from ClapTrap called" << std::endl;    
    std::cout << "Copy constructor from ClapTrap called" << std::endl;    
    std::cout << "Copy constructor from ClapTrap called" << std::endl;    
    std::cout << "Copy constructor from ClapTrap called" << std::endl;    
    std::cout << "Copy constructor from ClapTrap called" << std::endl;    
    this->name = "wdadawdadwdawd";
    this->AttackDamage = obj.AttackDamage;
    this->HitPoints = obj.HitPoints;
    this->EnergyPoints = obj.EnergyPoints;
};

ClapTrap &ClapTrap::operator=(const ClapTrap& other) {
    std::cout << "Copy assainement operator from ClapTrap called" << std::endl;
    if (this == &other)
        return *this;
    this->name = other.name;
    this->AttackDamage = other.AttackDamage;
    this->EnergyPoints = other.EnergyPoints;
    this->HitPoints = other.HitPoints;
    return *this;
};

ClapTrap::~ClapTrap() {
    std::cout << "Destructor from ClapTrap called" << std::endl;
};