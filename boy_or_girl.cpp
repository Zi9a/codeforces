#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

std::string name{};
std::vector<char> contained{};

bool distinct(char ch) {
  for(int i{0}; i<contained.size(); ++i) {
    if (contained[i] == ch) {
      return false;
    }
  }
  if(name.contains(ch)) {
    contained.push_back(ch);
  }
  return true;
}

int main() {
  std::cin >> name;
  auto distinct_characters{std::count_if(name.begin(), name.end(), distinct)};
  std::cout << (distinct_characters % 2? "IGNORE HIM!" : "CHAT WITH HER!") << '\n';
  return 0;
}
