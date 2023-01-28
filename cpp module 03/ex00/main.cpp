#include "ClapTrap.hpp"

int main () {
    ClapTrap    obj("ana");
    ClapTrap    obj2("target");


    obj.attack(obj2.getName());

    std::cout << "===== " << obj.getName() << " =====" << std::endl << std::endl;;
    std::cout << "HitPoints : " << obj.getHitPoints() << std::endl;
    std::cout << "EnergyPoints : " << obj.getEnergyPoints() << std::endl;
    std::cout << "AttackDamage : " << obj.getAttackDamage() << std::endl;

    obj2.takeDamage(obj.getAttackDamage());

    std::cout << "===== "<< obj2.getName() << " =====" << std::endl << std::endl;;
    std::cout << "HitPoints : " << obj2.getHitPoints() << std::endl;
    std::cout << "EnergyPoints : " << obj2.getEnergyPoints()<< std::endl;
    std::cout << "AttackDamage : " << obj2.getAttackDamage() << std::endl;
   
    obj.beRepaired(2);

    std::cout << "===== " << obj.getName() << " =====" << std::endl << std::endl;;
    std::cout << "HitPoints : " << obj.getHitPoints() << std::endl;
    std::cout << "EnergyPoints : " << obj.getEnergyPoints() << std::endl;
    std::cout << "AttackDamage : " << obj.getAttackDamage() << std::endl;

    return 0;
}