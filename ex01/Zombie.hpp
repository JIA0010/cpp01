#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
private:
    std::string name;

public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();

    void setName(std::string name);
    void announce();
};


class ZombieHorde {
private:
    Zombie* zombies;
    int N;

public:
    ZombieHorde(int N);
    ~ZombieHorde();

    void announce();
};

#endif
