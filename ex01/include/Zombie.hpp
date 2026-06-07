#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

#define HORDE_SIZE 8

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