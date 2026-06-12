#include <array>
#include <vector>
#include <iostream>

int main() {
  constexpr int size{4};
  std::array<int, size> input{};

  for(int i{}; i<size; ++i) {
    std::cin >> input[i];
  }

  std::vector<int> counted{};
  int output{};
  for(int i{}; i<size; ++i) {
    int counted_previously = std::count(counted.begin(), counted.end(), input[i]);
    if (counted_previously > 0) {
      continue;
    }
    counted.push_back(input[i]);

    int count = std::count(input.begin(), input.end(), input[i]);
    if (count > 1) {
      output += count - 1;
    }
  }

  std::cout << output << '\n';

  return 0;
}
