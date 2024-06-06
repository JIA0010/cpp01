#include "Zombie.hpp"
// #include <cstdlib>

ZombieHorde::ZombieHorde(int N) : N(N) {
    zombies = new Zombie[N];
    for (int i = 0; i < N; i++) {
        zombies[i].setName("Zombie " + std::to_string(i));  // 各ゾンビの名前を設定
    }
}

ZombieHorde::~ZombieHorde() {
    delete[] zombies;  // 動的配列を解放
}

void ZombieHorde::announce() {
    for (int i = 0; i < N; i++) {
        zombies[i].announce();
    }
}
