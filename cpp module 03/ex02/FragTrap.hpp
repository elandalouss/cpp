#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public :
        FragTrap();
        FragTrap(std::string Name);
        FragTrap(const FragTrap& obj);
        FragTrap &operator=(const FragTrap& other);
        void attack(const std::string& target);
        void highFivesGuys(void);
        ~FragTrap();
};

#endif
