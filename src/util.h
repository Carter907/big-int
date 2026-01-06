#include <cmath>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string_view>
#include <string>
#include <vector>

inline std::size_t vectouint(std::vector<char> chars) {
  std::size_t res{};
  std::size_t k = chars.size();

  for (auto i{0u}; i < chars.size(); i++) {
    res += static_cast<std::size_t>(std::pow(10, k - i - 1) * (chars[i] - '0'));
  }

  return res;
}

inline std::pair<std::string, std::size_t> string_div2(std::string_view sv) {
  std::vector<char> quot{};
  quot.reserve(sv.size());
  std::vector<char> digits{};
  digits.reserve(sv.size() / 2);

  for (auto i{0u}; i < sv.size(); i++) {

    digits.push_back(sv[i]);
    std::size_t n = vectouint(digits);

    if (n >= 2) {
      char q_dig = '0' + static_cast<char>(n / 2);
      quot.push_back(q_dig);
      digits.clear();
      char nxt_dig = '0' + static_cast<char>(n - static_cast<std::size_t>(quot.back() - '0') * 2);
      digits.push_back(nxt_dig);
    } else if (!digits.empty())
      quot.push_back('0');
  }

  return {std::string(quot.begin(), quot.end()), vectouint(digits)};
}


