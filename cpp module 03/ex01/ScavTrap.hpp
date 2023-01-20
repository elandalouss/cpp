#ifndef SCAVTRAP_H
#define SCAVTRAP_H
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public :
        ScavTrap();
        ScavTrap(std::string Name);
        void guardGate();
		// ScavTrap::ScavTrap(const ScavTrap& obj);
};
#endif 