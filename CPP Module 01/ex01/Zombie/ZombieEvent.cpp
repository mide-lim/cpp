#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
}
ZombieEvent::~ZombieEvent()
{
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie* z = new Zombie(name);
    return z;
}
Zombie* ZombieEvent::zombieHorde( int N, std::string name )
{
    if (N <= 0)
        return 0;

    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; ++i) {
        horde[i].setName(name);
    }
    return horde;
}