#include "../include/Zombie.hpp"

Zombie::Zombie(std::string n)
{
    _name = n;
}

Zombie::~Zombie()
{
    std::cout << _name << ": died....again..." << std::endl;
}

void    Zombie::announce()
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}