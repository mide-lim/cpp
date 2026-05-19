#include <stdio.h>
#include "./Zombie/Zombie.hpp"
#include "./Zombie/ZombieEvent.hpp"


int main()
{
    ZombieEvent event;
    Zombie *z1 = event.newZombie("Bob");
    z1->announce();
    delete z1;

    event.randomChump("Alice");
    return 0;
}