#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main () {
    // ClapTrap    obj1("ana");
    // ClapTrap    obj2(obj1);

    // obj2.setName("target");
    // obj1.attack(obj2.getName());

    // std::cout << "===== " << obj1.getName() << " =====" << std::endl << std::endl;;
    // std::cout << "HitPoints : " << obj1.getHitPoints() << std::endl;
    // std::cout << "EnergyPoints : " << obj1.getEnergyPoints() << std::endl;
    // std::cout << "AttackDamage : " << obj1.getAttackDamage() << std::endl;
   
    // obj2.takeDamage(obj1.getAttackDamage());

    // std::cout << "===== "<< obj2.getName() << " =====" << std::endl << std::endl;;
    // std::cout << "HitPoints : " << obj2.getHitPoints() << std::endl;
    // std::cout << "EnergyPoints : " << obj2.getEnergyPoints()<< std::endl;
    // std::cout << "AttackDamage : " << obj2.getAttackDamage() << std::endl;
   
    // obj1.beRepaired(2);

    // std::cout << "===== " << obj1.getName() << " =====" << std::endl << std::endl;;
    // std::cout << "HitPoints : " << obj1.getHitPoints() << std::endl;
    // std::cout << "EnergyPoints : " << obj1.getEnergyPoints() << std::endl;
    // std::cout << "AttackDamage : " << obj1.getAttackDamage() << std::endl;


    // ScavTrap obj3("heeerroooo");
    // ScavTrap obj4;
    
    // obj4.setName("not heeeeerooooo");
    // obj3.attack(obj4.getName());
    
    // std::cout << "===== " << obj3.getName() << " =====" << std::endl << std::endl;;
    // std::cout << "HitPoints : " << obj3.getHitPoints() << std::endl;
    // std::cout << "EnergyPoints : " << obj3.getEnergyPoints() << std::endl;
    // std::cout << "AttackDamage : " << obj3.getAttackDamage() << std::endl;

    // std::cout << "===== "<< obj4.getName() << " =====" << std::endl << std::endl;
    // obj4.takeDamage(obj3.getAttackDamage());
    // std::cout << "HitPoints : " << obj4.getHitPoints() << std::endl;
    // std::cout << "EnergyPoints : " << obj4.getEnergyPoints()<< std::endl;
    // std::cout << "AttackDamage : " << obj4.getAttackDamage() << std::endl;

    // obj3.beRepaired(65);
    // std::cout << "===== " << obj3.getName() << " =====" << std::endl << std::endl;;
    // std::cout << "HitPoints : " << obj3.getHitPoints() << std::endl;
    // std::cout << "EnergyPoints : " << obj3.getEnergyPoints() << std::endl;
    // std::cout << "AttackDamage : " << obj3.getAttackDamage() << std::endl;

    FragTrap obj5("super here");
    FragTrap obj6;

    obj6.setName("not super hero");
    obj5.attack(obj6.getName());

    std::cout << "===== " << obj5.getName() << " =====" << std::endl << std::endl;;
    std::cout << "HitPoints : " << obj5.getHitPoints() << std::endl;
    std::cout << "EnergyPoints : " << obj5.getEnergyPoints() << std::endl;
    std::cout << "AttackDamage : " << obj5.getAttackDamage() << std::endl;

    std::cout << "===== "<< obj6.getName() << " =====" << std::endl << std::endl;
    obj6.takeDamage(obj5.getAttackDamage());
    std::cout << "HitPoints : " << obj6.getHitPoints() << std::endl;
    std::cout << "EnergyPoints : " << obj6.getEnergyPoints()<< std::endl;
    std::cout << "AttackDamage : " << obj6.getAttackDamage() << std::endl;

    obj5.beRepaired(2);
    std::cout << "===== " << obj5.getName() << " =====" << std::endl << std::endl;;
    std::cout << "HitPoints : " << obj5.getHitPoints() << std::endl;
    std::cout << "EnergyPoints : " << obj5.getEnergyPoints() << std::endl;
    std::cout << "AttackDamage : " << obj5.getAttackDamage() << std::endl;


    return 0;
}