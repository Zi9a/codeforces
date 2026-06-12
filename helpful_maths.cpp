#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<char> numbers{};
  std::string equation{};
  std::cin >> equation;

  for(int i{0}; i<equation.length(); ++i) {
    if (isdigit(equation[i])) {
      numbers.push_back(equation[i]);
    }
  }

  std::sort(numbers.begin(), numbers.end());

  std::string_view character{""};
  for (auto i : numbers) {
    std::cout << character << i;
    character = "+";
  }
  std::cout << '\n';

  return 0;
}
