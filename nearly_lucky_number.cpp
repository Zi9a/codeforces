#include <cstddef>
#include <cstdint>
#include <iostream>

std::size_t lucky_numbers_in(std::size_t n) {
  int lucky_number{};
  while(n > 0) {
    if (n % 10 == 4 || n % 10 == 7) {
      lucky_number++;
    }
    n /= 10;
  }
  return lucky_number;
}

bool lucky_number(std::size_t& n) {
  if (n == 0) return false;
  while (n > 0){
    if (n % 10 == 4) {
      n /= 10;
      continue;
    }

    if (n % 10 == 7) {
      n /= 10;
      continue;
    }

    if (n % 10 != 4 && n % 10 != 7) {
      return false;
    }
    n /= 10;
  }
  return true;
}

int main() {
  std::int64_t n;
  std::cin >> n;
  std::size_t lucky_number_in_n = lucky_numbers_in(n);

  bool luck = lucky_number(lucky_number_in_n);

  if (luck) {
    std::cout << "YES";
  } else {
    std::cout << "NO";
  }

  return 0;
}
