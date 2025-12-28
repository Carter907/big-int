#include "bigint.h"
#include <iostream>

struct g {
  int n;
  char l;
};

int main() {

  BigInt<50> n{};
  std::cout << n.to_string() << '\n';

  return 0;
}
