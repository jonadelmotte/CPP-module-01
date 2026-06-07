#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

# define RESET "\e[0m"
# define RED "\e[31m"
# define GREEN "\e[32m"
# define BLUE "\e[1;36m"
# define CYAN "\e[0;36m"
# define PURPLE "\e[0;35m"

class Zombie
{
private:
    std::string _name;
public:
    Zombie(std::string n);
    ~Zombie();
    void announce();
} ;

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif