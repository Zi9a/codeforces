#include <iostream>

int main() {
  int number{};
  std::cin >> number;

  bool swap{ true };
  for(int i{}; i<number; ++i) {
    if (swap) {
      std::cout << "I hate ";
    } else {
      std::cout << "I love ";
    }
    swap = !swap;
    if (i != number - 1) {
      std::cout << "that ";
    } else {
      std::cout << "it" << '\n';
    }
  }

  return 0;
}
