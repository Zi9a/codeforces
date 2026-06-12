#include <iostream>

int main() {
  int m, n;
  std::cin >> m >> n;

  bool first{ false };
  for(int i{1}; i<=m; ++i) {
    for(int j{1}; j<=n; ++j) {
      if (i % 2 != 0) {
        std::cout << '#';
      } else {
        if (first && j == 1) {
          std::cout << '#';
          continue;
        } else if (!first && j == n) {
          std::cout << '#';
          if (j == n) {
            first = !first;
          }
          continue;
        }
        if (j == n) {
          first = !first;
        }
        std::cout << '.';
      }
    }
    std::cout << '\n';
  }

  return 0;
}
