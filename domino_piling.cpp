#include <iostream>

int main() {
  int m, n;
  std::cin >> m >> n;
  int area{m * n};

  if (area % 2 == 0) {
    std::cout << area / 2;
  } else {
    std::cout << (area - 1) / 2;
  }
  return 0;
}
