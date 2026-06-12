#include <algorithm>
#include <iostream>

int main() {
  int a, b;
  std::cin >> a >> b;
  int min{std::min(a, b)};
  std::cout << min << ' ';
  std::cout << (a + b - 2 * min) / 2 << '\n';
  return 0;
}
