#include "ClapTrap.hpp"

int main () {
    ClapTrap    obj("ana");

    obj.attack("target");

    std::cout << "===== ana =====" << std::endl << std::endl;;
    std::cout << "HitPoints : " << obj.getHitPoints() << std::endl;
    std::cout << "EnergyPoints : " << obj.getEnergyPoints() - 1 << std::endl;
    std::cout << "AttackDamage : " << obj.getAttackDamage() << std::endl;


    return 0;
}