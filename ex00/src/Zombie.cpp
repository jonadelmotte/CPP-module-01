#include "../include/Zombie.hpp"

Zombie::Zombie(std::string n)
{
    if (!n.empty())
        _name = n;
    else
        _name = "Nobody";
}

Zombie::~Zombie()
{
    std::cout << BLUE << _name << ": " GREEN "died....again..." RESET << std::endl;
}

void    Zombie::announce()
{
    std::cout << BLUE << _name <<  ": " << RED "BraiiiiiiinnnzzzZ..." RESET << std::endl;
}