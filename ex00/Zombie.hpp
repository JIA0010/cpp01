#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
private:
    std::string name;

public:
    Zombie(std::string name);  // コンストラクタ
    ~Zombie();  // デストラクタ

    void announce(void);  // メンバー関数
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif
