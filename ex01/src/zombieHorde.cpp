#include "../include/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
    {
        std::cout << "this is not a horde, this is NOTHING !!!" << std::endl;
        return nullptr;
    }
    Zombie *horde = new Zombie[N];
    if (horde == nullptr)
    {
        std::cout << "error while allocating the hord" << std::endl;
        return nullptr;
    }
    for (int i = 0; i < N; i++)
        horde[i].nameZombie(name);
    return (horde);
}