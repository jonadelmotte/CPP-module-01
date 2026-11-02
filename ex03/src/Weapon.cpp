#include "../include/Weapon.hpp"

Weapon::Weapon(const std::string &type)
{
    setType(type);
}

Weapon::~Weapon()
{
    std::cout << RED << _type << ": " BLUE "IS NO MORE" RESET << std::endl;
}

std::string Weapon::getType() const
{
    return (_type);
}

void Weapon::setType(const std::string &type)
{
    if (!type.empty())
        _type = type;
    else
        _type = "Nothing";
}

