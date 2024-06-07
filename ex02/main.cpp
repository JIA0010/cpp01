#include <iostream>
#include <string>

int main() {

    std::string str = "HI THIS IS BRAIN";

    //ポインタ
    std::string* stringPTR = &str;

    // 参照
    std::string& stringREF = str;

    std::cout << "文字列変数のメモリアドレス: " << &str << std::endl;
    std::cout << "stringPTRが保持するメモリアドレス: " << stringPTR << std::endl;
    std::cout << "stringREFが保持するメモリアドレス: " << &stringREF << std::endl;

    std::cout << "文字列変数の値: " << str << std::endl;
    std::cout << "stringPTRが指す値: " << *stringPTR << std::endl;
    std::cout << "stringREFが指す値: " << stringREF << std::endl;

    return 0;
}
