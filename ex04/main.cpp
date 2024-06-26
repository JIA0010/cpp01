#include <iostream>

#include "SedIsForLosers.hpp"

int main(int argc, char* argv[]) {
  if (argc != 4) {
    std::cerr << "Usage: " << argv[0] << " <filename> <string1> <string2>"
              << std::endl;
    return 1;
  }

  std::string filename = argv[1];
  std::string s1 = argv[2];
  std::string s2 = argv[3];

  if (filename.empty() || s1.empty()) {
    std::cerr << "Error: filename and s1 must not be empty" << std::endl;
    return 1;
  }

  SedIsForLosers::replace(filename, s1, s2);

  return 0;
}

// __attribute__((destructor)) static void destructor() {
//   system("leaks -q SedIsForLosers");
// }