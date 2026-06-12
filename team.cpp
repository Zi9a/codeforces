#include <iostream>

int main() {
  int number{};
  std::cin >> number;

  int solve{};
  for(int i{}; i<number; ++i) {
    int a{};
    int b{};
    int c{};

    std::cin >> a >> b >> c;

    if (a && b && c) {
      solve++;
      continue;
    }

    if ((a && b) || (a && c) || (b && c)) {
      solve++;
    }
  }
  std::cout << solve;
  std::cout << '\n';

  return 0;
}
