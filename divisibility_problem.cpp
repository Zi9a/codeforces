#include <iostream>

int main() {
  int test{};
  std::cin >> test;

  for(int i{}; i<test; ++i) {
    long long a{};
    long long b{};
    std::cin >> a >> b;

    if (a % b) {
      std::cout << b - (a % b) << '\n';
    } else {
      std::cout << 0 << '\n';
    }
  }
  return 0;
}
