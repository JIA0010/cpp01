#include "Harl.hpp"

int main() {
  Harl harl;

  harl.complain("DEBUG");
  harl.complain("INFO");
  harl.complain("WARNING");
  harl.complain("ERROR");

  return 0;
}

__attribute__((destructor)) static void destructor() {
  system("leaks -q harl");
}