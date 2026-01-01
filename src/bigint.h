#pragma once

#include <bitset>

template <std::size_t sz> class big_int {

  std::bitset<8 * sz> rep;
  std::string str_rep;

  std::bitset<8 * sz> str_to_rep(std::string str) {
    // TODO: Convert a string number into a 2's complement binary
    // representation.
  }

  std::string rep_to_str(std::bitset<8 * sz> bts) {
    // TODO: Convert a bitset 2's complement to a string decimal number.
  }

public:
  big_int() = default;
  big_int(std::string num) : rep(str_to_rep(num)), str_rep(num) {}
  big_int(const big_int<sz> &other) : rep(other.rep), str_rep(other.str_rep) {}
  big_int(big_int<sz> &&rvr)
      : rep(std::move(rvr.rep)), str_rep(std::move(rvr.str_rep)) {}

  big_int &operator=(const big_int &other) {

    rep = other.rep;

    return *this;
  }

  big_int &operator=(big_int &&rvr) {

    rep = std::move(rvr.rep);

    return *this;
  }

  bool operator<=>(const big_int &oth) const = default;

  std::string to_string() { return rep.to_string(); }
};
