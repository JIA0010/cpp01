#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int N) : N(N) {
    zombies = new Zombie[N];
    for (int i = 0; i < N; i++) {
        zombies[i].setName("Zombie " + std::to_string(i));  // 各ゾンビの名前を設定
    }
}

ZombieHorde::~ZombieHorde() {
    delete[] zombies;
}

void ZombieHorde::announce() {
    for (int i = 0; i < N; i++) {
        zombies[i].announce();
    }
}
