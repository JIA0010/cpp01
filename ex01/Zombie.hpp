#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string private_name;
        
    public:
        Zombie();
        ~Zombie();
        void announce(void) const;
        void set_name(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif