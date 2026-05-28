#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

#include "Zombie.hpp"

class ZombieEvent 
{
public:
    ZombieEvent();
    ~ZombieEvent();

    Zombie* newZombie(std::string name);
    Zombie* zombieHorde( int N, std::string name );
};

#endif // ZOMBIE_EVENT_HPP