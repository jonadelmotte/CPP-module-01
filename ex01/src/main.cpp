#include "../include/Zombie.hpp"

int main()
{
    Zombie *horde = zombieHorde(HORDE_SIZE, "Henry the IVth");
    if (horde == nullptr)
        return 1;
    for (int i = 0; i < HORDE_SIZE; i++)
        horde[i].announce();
    delete[] horde;
    horde = nullptr;
    return 0; 
}