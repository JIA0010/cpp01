#include "Zombie.hpp"

Zombie::Zombie() {};

Zombie::~Zombie() {};

void Zombie::set_name(std::string name) { _name = name; }

void Zombie::announce(void) const {
  std::cout << _name << ": Braiiiinnnzzz..." << std::endl;
}