#include <iostream>
#include <vector>

int main() {
  int n{};
  std::cin >> n;

  std::vector<int> nums{};
  while (n--) {
    std::cin >> nums.emplace_back();
  }
  for (auto i : nums) {
    std::cout << (i % 3 == 0 ? "Second" : "First" ) << '\n';
  }
  return 0;
}
