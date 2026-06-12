#include <iostream>

int main() {
  int number{};
  std::cin >> number;

  int count{};
  for(int i{}; i<number; ++i) {
    int size{};
    int capacity{};
    std::cin >> size >> capacity;

    if (capacity - size >= 2) {
      count++;
    }
  }
  std::cout << count << '\n';

  return 0;
}
