#include <iostream>
#include "ClapTrap/ClapTrap.hpp"
#include "ScavTrap/ScavTrap.hpp"

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
    std::cout << "===== Copy tests =====" << std::endl;

    ScavTrap scavtrap2(scavtrap);
    ScavTrap scavtrap3;
    scavtrap3 = scavtrap;

    return 0;
}