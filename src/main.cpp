#include "bigint.h"
#include "util.h"
#include <format>
#include <iostream>

int main() {

  // using namespace std::string_literals;
  //
  // big_int<1> big_i = "123"s;
  //
  auto [q, r] = string_div2("7917349172943721492174291412749");

  std::cout << q << '\n';
  std::cout << r << '\n';

  return 0;
}
