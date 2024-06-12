#include "Zombie.hpp"

int main() {
  Zombie* heapZombie = newZombie("HeapZombie");
  heapZombie->announce();
  delete heapZombie;

  randomChump("StackZombie");

  return 0;
}

// __attribute__((destructor)) static void destructor() {
//   system("leaks -q zombie");
// }