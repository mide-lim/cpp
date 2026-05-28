#include <stdio.h>
#include "./Zombie/Zombie.hpp"
#include "./Zombie/ZombieEvent.hpp"

int main()
{
    ZombieEvent event;
    Zombie *z1 = event.newZombie("Bob");
    z1->announce();
    delete z1;

    Zombie* horde = event.zombieHorde(3, "HordeZombie");
    if (horde) {
        for (int i = 0; i < 3; ++i) {
            horde[i].announce();
        }
        delete[] horde;
    }
    return 0;
}