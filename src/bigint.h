#pragma once

#include <bitset>

template <std::size_t sz> class BigInt {

  std::bitset<8 * sz> rep;

public:
  BigInt() = default;

  BigInt(const BigInt<sz> &other) : rep(other.rep) {}
  BigInt(BigInt<sz> &&rvr) : rep(std::move(rvr.rep)) {}

  BigInt &operator=(const BigInt &other) {

    rep = other.rep;

    return *this;
  }

  BigInt &operator=(BigInt &&rvr) {

    rep = std::move(rvr.rep);

    return *this;
  }

  bool operator<=>(const BigInt &oth) const = default;

  std::string to_string() { return rep.to_string(); }
};
