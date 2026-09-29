#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name)
{
    _Weapon = NULL;
    _name = name;
}

HumanB::~HumanB()
{
    std::cout << GREEN << _name << ": " BLUE "has died!" RESET << std::endl;
}

void HumanB::setWeapon(Weapon &Weapon)
{
    _Weapon = &Weapon;
}

void HumanB::attack()
{
    if (_Weapon != NULL)
        std::cout << GREEN << _name << BLUE " attacks with their " RED << _Weapon->getType() << RESET << std::endl;
    else
        std::cout << GREEN << _name << BLUE " dosen't realy attack to be honest " RESET << std::endl;
}