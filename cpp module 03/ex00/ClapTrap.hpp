#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <iostream>

class ClapTrap {
    private :
        int         HitPoints;
        int         EnergyPoints;
        int         AttackDamage;
        std::string name;
    public :
            // member function
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
            // constructor and destructor
        ClapTrap(std::string Name);
        ~ClapTrap();
            // getter & setter
        int getHitPoints();
        int getEnergyPoints();
        int getAttackDamage();
};

#endif