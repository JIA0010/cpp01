#include "Zombie.hpp"

Zombie::Zombie() {};

Zombie::~Zombie() {};

void Zombie::set_name(std::string name) { private_name = name; }

void Zombie::announce(void) const {
  std::cout << private_name << ": Braiiiinnnzzz..." << std::endl;
}