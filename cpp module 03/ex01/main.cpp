#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main () {
    // ClapTrap    obj("ana");
    // ClapTrap    obj2(obj);

    // obj2.setName("target");
    // obj.attack(obj2.getName());

    // std::cout << "===== " << obj.getName() << " =====" << std::endl << std::endl;;
    // std::cout << "HitPoints : " << obj.getHitPoints() << std::endl;
    // std::cout << "EnergyPoints : " << obj.getEnergyPoints() << std::endl;
    // std::cout << "AttackDamage : " << obj.getAttackDamage() << std::endl;
   
    // obj2.takeDamage(obj.getAttackDamage());

    // std::cout << "===== "<< obj2.getName() << " =====" << std::endl << std::endl;;
    // std::cout << "HitPoints : " << obj2.getHitPoints() << std::endl;
    // std::cout << "EnergyPoints : " << obj2.getEnergyPoints()<< std::endl;
    // std::cout << "AttackDamage : " << obj2.getAttackDamage() << std::endl;
   
    // obj.beRepaired(2);

    // std::cout << "===== " << obj.getName() << " =====" << std::endl << std::endl;;
    // std::cout << "HitPoints : " << obj.getHitPoints() << std::endl;
    // std::cout << "EnergyPoints : " << obj.getEnergyPoints() << std::endl;
    // std::cout << "AttackDamage : " << obj.getAttackDamage() << std::endl;


    ScavTrap obj3("heeerroooo");
    ScavTrap obj4;
    
    obj4.setName("not heeeeerooooo");
    obj3.attack(obj4.getName());
    
    std::cout << "===== " << obj3.getName() << " =====" << std::endl << std::endl;;
    std::cout << "HitPoints : " << obj3.getHitPoints() << std::endl;
    std::cout << "EnergyPoints : " << obj3.getEnergyPoints() << std::endl;
    std::cout << "AttackDamage : " << obj3.getAttackDamage() << std::endl;

    std::cout << "===== "<< obj4.getName() << " =====" << std::endl << std::endl;
    obj4.takeDamage(obj3.getAttackDamage());
    std::cout << "HitPoints : " << obj4.getHitPoints() << std::endl;
    std::cout << "EnergyPoints : " << obj4.getEnergyPoints()<< std::endl;
    std::cout << "AttackDamage : " << obj4.getAttackDamage() << std::endl;

    obj3.beRepaired(65);
    std::cout << "===== " << obj3.getName() << " =====" << std::endl << std::endl;;
    std::cout << "HitPoints : " << obj3.getHitPoints() << std::endl;
    std::cout << "EnergyPoints : " << obj3.getEnergyPoints() << std::endl;
    std::cout << "AttackDamage : " << obj3.getAttackDamage() << std::endl;

    return 0;
}