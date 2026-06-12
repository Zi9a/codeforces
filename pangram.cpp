#include <algorithm>
#include <cctype>
#include <iostream>
#include <vector>

int main() {
  int size{};
  std::cin >> size;
  std::string sentence{};
  std::cin >> sentence;
  std::for_each(sentence.begin(), sentence.end(), [](char& c) {
    c = tolower(c);
  });

  std::vector<char> repeated{};
  for(int i{}; i<size; ++i) {
    auto repeat{std::count(repeated.begin(), repeated.end(), sentence[i])};
    if (repeat > 0) {
      continue;
    }

    auto count{std::count(sentence.begin(), sentence.end(), sentence[i])};
    if (count > 0) {
      repeated.push_back(sentence[i]);
    }
  }

  if (repeated.size() == 26) {
    std::cout << "YES" << '\n';
  } else {
    std::cout << "NO" << '\n';
  }

  return 0;
}
