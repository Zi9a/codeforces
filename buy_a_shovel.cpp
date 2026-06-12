#include <iostream>

int main() {
  int k, r;
  std::cin >> k >> r;
  int money{ k };

  while (true) {
    int remainder{money % 10};
    if (money % 10 == 0) {
      break;
    }
    if (remainder == r) {
      break;
    }
    money += k;
  }

  std::cout << money / k << '\n';

  return 0;
}
