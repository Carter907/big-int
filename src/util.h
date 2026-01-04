#include <cmath>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <vector>

inline std::size_t vectouint(std::vector<char> chars);

inline std::pair<std::string, std::size_t> string_div2(std::string_view sv) {
  std::vector<char> quot{};
  quot.reserve(sv.size());
  std::vector<char> digits{};
  digits.reserve(sv.size() / 2);

  for (auto i{0u}; i < sv.size(); i++) {

    digits.push_back(sv[i]);
    std::size_t n = vectouint(digits);

    if (n >= 2) {
      quot.push_back('0' + (n / 2));
      digits.clear();
      digits.push_back('0' + (n - (quot.back() - '0') * 2));
    }
  }

  return {std::string(quot.begin(), quot.end()), vectouint(digits)};
}

inline std::size_t vectouint(std::vector<char> chars) {
  std::size_t res{};
  int k = chars.size();

  for (auto i{0u}; i < chars.size(); i++) {
    res += std::pow(10, k - i - 1) * (chars[i] - '0');
  }

  return res;
}
