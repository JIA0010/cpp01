#include "Zombie.hpp"

int main() {
    ZombieHorde horde(5);  // 5体のゾンビ群れを生成
    horde.announce();  // ゾンビ群れの全てのゾンビが自己紹介

    return 0;
}
