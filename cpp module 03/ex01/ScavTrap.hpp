#ifndef SCAVTRAP_H
#define SCAVTRAP_H
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public :
        // member functions
        void attack(const std::string &target);
        void guardGate();
        // constructors and distructor
        ScavTrap();
        ScavTrap(std::string Name);
		ScavTrap(const ScavTrap& obj);
        ScavTrap &operator=(const ScavTrap& other);
        ~ScavTrap ();
};
#endif