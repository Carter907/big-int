#include "bigint.h"
#include "util.h"
#include <format>
#include <iostream>

int main() {

  using namespace std::string_literals;
  
  big_int<1> big_i = "61"s;

  std::cout << big_i.to_string() << '\n';
  
  // auto [q, r] = string_div2("61");

  // std::cout << q << '\n';
  // std::cout << r << '\n';

  return 0;
}
