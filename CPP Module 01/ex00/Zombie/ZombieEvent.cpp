#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}

Zombie *ZombieEvent::newZombie(std::string name)
{
    Zombie *z = new Zombie(name);
    return z;
}

void ZombieEvent::randomChump(std::string name)
{
    Zombie z(name);
    z.announce();
}