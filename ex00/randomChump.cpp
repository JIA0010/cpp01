#include "Zombie.hpp"

void randomChump(std::string name) {
    Zombie zombie(name);  // スタックにゾンビを割り当てる
    zombie.announce();
}
