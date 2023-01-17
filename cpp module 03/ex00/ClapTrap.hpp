#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <iostream>
#include <string>

class ClapTrap {
    private :
        int         HitPoints;
        int         EnergyPoints;
        int         AttackDamage;
        std::string name;
    public :
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ClapTrap();
        ~ClapTrap();
};

#endif