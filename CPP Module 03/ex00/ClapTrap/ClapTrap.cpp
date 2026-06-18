#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
    _name = "default";
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap parameter constructor called" << std::endl;
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;

    if (this != &copy)
    {
        _name = copy._name;
        _hitPoints = copy._hitPoints;
        _energyPoints = copy._energyPoints;
        _attackDamage = copy._attackDamage;
    }

    return *this;
}

void ClapTrap::attack(std::string const & target)
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " can't attack because it has no hit points!" << std::endl;
        return;
    }
    if (_energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " can't attack because it has no energy points!" << std::endl;
        return;
    }

    _energyPoints--;

    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;   
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << _name << " takes "
              << amount << " points of damage!" << std::endl;

    if (amount >= _hitPoints)
        _hitPoints = 0;
    else
        _hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " can't repair itself because it has no hit points!" << std::endl;
        return;
    }
    if (_energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " can't repair itself because it has no energy points!" << std::endl;
        return;
    }

    _energyPoints--;
    _hitPoints += amount;

    std::cout << "ClapTrap " << _name << " is repaired for "
              << amount << " points!" << std::endl;
}