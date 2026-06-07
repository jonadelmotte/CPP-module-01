#include "../include/Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << BLUE << _name << ": " GREEN "died....again..." RESET << std::endl;
}

void    Zombie::announce()
{
    std::cout << BLUE << _name <<  ": " << RED "BraiiiiiiinnnzzzZ..." RESET << std::endl;
}

void    Zombie::nameZombie(std::string name)
{
    _name = name;
}
