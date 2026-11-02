#include "../include/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon):_Weapon(Weapon)
{
    if (!name.empty())
        _name = name;
    else
        _name = "Nobody";
}

HumanA::~HumanA()
{
    std::cout << GREEN << _name << ": " BLUE "has died!" RESET << std::endl;
}

void HumanA::attack()
{
    std::cout << GREEN << _name << BLUE " attacks with their " RED << _Weapon.getType() << RESET << std::endl;
}