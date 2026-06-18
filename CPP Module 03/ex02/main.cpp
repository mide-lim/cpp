#include <iostream>
#include "ClapTrap/ClapTrap.hpp"
#include "ScavTrap/ScavTrap.hpp"
#include "FragTrap/FragTrap.hpp"

int main()
{
    std::cout << "===== ClapTrap tests =====" << std::endl;
    ClapTrap claptrap("Claptrap");

    claptrap.attack("enemy");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);

    std::cout << std::endl;
    std::cout << "===== ScavTrap tests =====" << std::endl;
    ScavTrap scavtrap("Scavtrap");

    scavtrap.attack("enemy");
    scavtrap.guardGate();

    std::cout << std::endl;
    std::cout << "===== FragTrap tests =====" << std::endl;
    FragTrap fragtrap("Fragtrap");

    fragtrap.attack("enemy");
    fragtrap.highFivesGuys();
    fragtrap.takeDamage(150);
    fragtrap.attack("enemy");
    fragtrap.beRepaired(10);

    std::cout << std::endl;
    std::cout << "===== Copy tests =====" << std::endl;
    FragTrap fragtrap2(fragtrap);
    FragTrap fragtrap3;
    fragtrap3 = fragtrap;

    return 0;
}