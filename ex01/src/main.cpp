#include "../include/Zombie.hpp"

int main()
{
    Zombie *horde = zombieHorde(HORDE_SIZE, "The only true henry");
    if (horde == NULL)
        return 1;
    for (int i = 0; i < HORDE_SIZE; i++)
        horde[i].announce();
    delete[] horde;
    horde = NULL;
    return 0; 
}