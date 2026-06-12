#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

int main() {
  int number;
  std::cin >> number;
  std::vector<int> line(number);
  for (auto& i : line) {
    std::cin >> i;
  }

  int max {std::ranges::max(line)};
  int min {std::ranges::min(line)};

  if (number == 2 && line[0] != max) {
    std::cout << 1 << '\n';
    std::exit(0);
  } 
  if (number == 2 && line[0] == max){
    std::cout << 0 << '\n';
    std::exit(0);
  }

  int max_pos{};
  for(int i{}; i<number; ++i) {
    if (line[0] == max) {
      max_pos = 1;
      break;
    }
    if (line[i] == max) {
      max_pos = i + 1;
      break;
    }
  }

  int min_pos{};
  for(int i{number}; i > 0; --i) {
    if (line[number - 1] == min) {
      min_pos = number;
      break;
    }
    if (line[i - 1] == min) {
      min_pos = i;
      break;
    }
  }

  if (min_pos > max_pos) {
    std::cout << max_pos - 1 + number - min_pos << '\n';
  } else if (min_pos < max_pos) {
    std::cout << max_pos - 1 + number - min_pos - 1 << '\n';
  }

  return 0;
}
