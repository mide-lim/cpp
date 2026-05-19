#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
public:
    ZombieEvent();
    ~ZombieEvent();

    Zombie *newZombie(std::string name);
    void randomChump(std::string name);
};

#endif
