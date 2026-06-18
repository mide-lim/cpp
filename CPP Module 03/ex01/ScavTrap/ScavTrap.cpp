#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    _name = "default";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap parameter constructor called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = copy;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;

    if (this != &copy)
    {
        _name = copy._name;
        _hitPoints = copy._hitPoints;
        _energyPoints = copy._energyPoints;
        _attackDamage = copy._attackDamage;
    }

    return *this;
}

void ScavTrap::attack(std::string const & target)
{
    if (_hitPoints == 0)
    {
        std::cout << "ScavTrap " << _name << " can't attack because it has no hit points!" << std::endl;
        return;
    }
    if (_energyPoints == 0)
    {
        std::cout << "ScavTrap " << _name << " can't attack because it has no energy points!" << std::endl;
        return;
    }

    _energyPoints--;

    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name
              << " has entered Gate keeper mode!" << std::endl;
}