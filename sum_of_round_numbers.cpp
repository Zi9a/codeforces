#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int t;
  std::cin >> t;
  std::vector<int> nums(t);

  for (auto &i : nums) {
    std::cin >> i;
  }

  std::vector<std::vector<int>> output{};
  for (auto i : nums) {
    std::vector<int> constituents{};
    int position{ 1 };
    while (i > 0) {
      if (i % 10 != 0) {
        constituents.push_back(i % 10 * position);
      }
      position *= 10;
      i /= 10;
    }
    std::reverse(constituents.begin(), constituents.end());
    output.push_back(constituents);
  }


  for (auto i : output) {
    std::cout << i.size() << '\n';
    for (auto j : i) {
      std::cout << j << ' ';
    }
    std::cout << '\n';
  }

  return 0;
}
