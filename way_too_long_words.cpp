#include <iostream>
#include <iterator>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> words{};
  int number{};
  std::cin >> number;

  for(int i = 0; i < number; ++i) {
    std::cin >> words.emplace_back();
  }

  std::string new_word{};
  for(int i = 0; i < number; ++i) {
    if (std::size(words[i]) <= 10) {
      std::cout << words[i];
      std::cout << '\n';
      continue;
    }
    auto length{words[i].length()};
    new_word = words[i][0] + std::to_string(length-2) + words[i][length-1];
    std::cout << new_word;
    std::cout << '\n';
  }

  return 0;
}
