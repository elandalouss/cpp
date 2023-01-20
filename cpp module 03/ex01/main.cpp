#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main () {
    ClapTrap    obj("ana");
    ClapTrap    obj2(obj);

    obj2.setName("target");
    obj.attack(obj2.getName());

    std::cout << "===== " << obj.getName() << " =====" << std::endl << std::endl;;
    std::cout << "HitPoints : " << obj.getHitPoints() << std::endl;
    std::cout << "EnergyPoints : " << obj.getEnergyPoints() << std::endl;
    std::cout << "AttackDamage : " << obj.getAttackDamage() << std::endl;

    std::cout << "===== "<< obj2.getName() << " =====" << std::endl << std::endl;;
    std::cout << "HitPoints : " << obj2.getHitPoints() << std::endl;
    std::cout << "EnergyPoints : " << obj2.getEnergyPoints()<< std::endl;
    std::cout << "AttackDamage : " << obj2.getAttackDamage() << std::endl;
   
    obj.beRepaired(2);

    std::cout << "===== " << obj.getName() << " =====" << std::endl << std::endl;;
    std::cout << "HitPoints : " << obj.getHitPoints() << std::endl;
    std::cout << "EnergyPoints : " << obj.getEnergyPoints() << std::endl;
    std::cout << "AttackDamage : " << obj.getAttackDamage() << std::endl;

    obj.takeDamage(3);
    
    std::cout << "===== " << obj.getName() << " =====" << std::endl << std::endl;;
    std::cout << "HitPoints : " << obj.getHitPoints() << std::endl;
    std::cout << "EnergyPoints : " << obj.getEnergyPoints() << std::endl;
    std::cout << "AttackDamage : " << obj.getAttackDamage() << std::endl;

    ScavTrap obj3("heeeeerroooooo");

    obj3.attack(obj.getName());


    return 0;
}