#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
private :
    std::string _name;
    Weapon *_Weapon = nullptr;
public :
    HumanB(std::string name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon Weapon);
} ;

#endif