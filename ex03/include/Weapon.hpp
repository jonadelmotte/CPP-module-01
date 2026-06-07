#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

# define RESET "\e[0m"
# define RED "\e[31m"
# define GREEN "\e[32m"
# define BLUE "\e[1;36m"
# define CYAN "\e[0;36m"
# define PURPLE "\e[0;35m"

class Weapon
{
private :
    std::string _type;
public :
    Weapon(const std::string &type);
    ~Weapon();
    std::string getType() const;
    void setType(const std::string &type);
} ;

#endif