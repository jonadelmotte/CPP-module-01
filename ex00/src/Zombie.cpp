#include "../include/Zombie.hpp"
#include <iostream>

Zombie::Zombie() : _name("Nobody")
{
}

Zombie::Zombie(std::string &n) : _name(n)
{
}

Zombie::~Zombie()
{
    std::cout << BLUE << _name << ": " GREEN "died....again..." RESET << std::endl;
}

void    Zombie::announce() const
{
    std::cout << BLUE << _name <<  ": " << RED "BraiiiiiiinnnzzzZ..." RESET << std::endl;
}