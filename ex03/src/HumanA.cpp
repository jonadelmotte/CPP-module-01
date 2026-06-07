#include "../include/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon):_Weapon(Weapon)
{
    _name = name;

}

HumanA::~HumanA()
{
    std::cout << GREEN << _name << ": " BLUE "has died!" RESET << std::endl;
}

void HumanA::attack()
{
    std::cout << GREEN << _name << BLUE " attacks with their " RED << _Weapon.getType() << RESET << std::endl;
}