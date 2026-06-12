#include <iostream>
#include <string>
#include <vector>

int main() {
  int number{};
  std::cin >> number;

  std::vector<std::string> operations{};
  operations.reserve(number);

  for(int i{0}; i<number; ++i) {
    std::cin >> operations.emplace_back();
  }

  int result{};
  for(int i{0}; i<number; ++i) { 
    if (operations[i] == "X++") result++;
    if (operations[i] == "++X") result++;
    if (operations[i] == "X--") result--;
    if (operations[i] == "--X") result--; }

  std::cout << result;

  return 0;
}
