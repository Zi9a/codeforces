#include <iostream>

int main() {
  int number{};
  std::cin >> number;

  int count{};
  int prev{};
  for(int i{}; i<number; ++i) {
    int next;
    std::cin >> next;
    if (i == 0) {
      prev = next;
      continue;
    }
    if (prev != next) {
      prev = next;
      count++;
    }
  }

  std::cout << count + 1 << '\n';

  return 0;
}
