#include "Zombie.hpp"

int main() {
    // ヒープにゾンビを割り当てて使用
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    delete heapZombie;  // メモリの解放

    // スタックにゾンビを割り当てて使用
    randomChump("StackZombie");

    return 0;
}
