#include "../include/Zombie.hpp"

int main()
{
    Zombie *newZ;

    newZ = newZombie("Zola");
    randomChump("Sarraute");
    delete newZ;
    newZ = nullptr;
    return 0;
}
