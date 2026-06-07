#include "../include/Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << _name << ": died....again..." << std::endl;
}

void    Zombie::nameZombie(std::string name)
{
    _name = name;
}

void    Zombie::announce()
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
