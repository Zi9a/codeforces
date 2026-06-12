#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

int main() {
  std::string set{};
  std::getline(std::cin, set, '}');

  int digit{1};
  std::vector<char> distinct{};
  while (digit < set.length()) {
    int count = std::count(distinct.begin(), distinct.end(), set[digit]);
    if (count == 0) {
      distinct.push_back(set[digit]);
    }
    digit += 3;
  }
  std::cout << distinct.size() << '\n';

  return 0;
}
