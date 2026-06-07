#include "../include/Zombie.hpp"

Zombie::Zombie(std::string n)
{
    _name = n;
}

Zombie::~Zombie()
{
    std::cout << BLUE << _name << ": " GREEN "died....again..." RESET << std::endl;
}

void    Zombie::announce()
{
    std::cout << BLUE << _name <<  ": " << RED "BraiiiiiiinnnzzzZ..." RESET << std::endl;
}