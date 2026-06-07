#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

#define HORDE_SIZE 8

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
    Zombie();
    ~Zombie();
    void nameZombie(std::string name);
    void announce();
} ;

Zombie* zombieHorde( int N, std::string name );

#endif