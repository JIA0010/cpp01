#include "Zombie.hpp"

int main()
{
   Zombie* horde = zombieHorde(5, "horde");
    for(int i=0; i < 5; i++)
    {
        horde[i].announce();
    }
    delete[] horde;
}

__attribute__((destructor)) static void destructor()
{
	system("leaks -q ft_sed");
}