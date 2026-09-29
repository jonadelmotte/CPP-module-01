#include "../include/Zombie.hpp"

int main()
{
    Zombie *newZ;

    newZ = newZombie("Zola");
    randomChump("Sarraute");
    delete newZ;
    newZ = NULL;
    return 0;
}
