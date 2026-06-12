#include <algorithm>
#include <cstdlib>
#include <iostream>

int main() {
  std::string pile{};
  std::string s{};
  {
    std::string s1{};
    std::string s2{};
    std::cin >> s1 >> s2 >> pile;
    s = s1 + s2;
  }

  if (pile.length() != s.length()) {
    std::cout << "NO" << '\n';
    std::exit(0);
  }

  auto length{pile.length()};
  for(int i{}; i<length; ++i) {
    int count_pile_char = std::count(pile.begin(), pile.end(), pile[i]);
    int count_s_char = std::count(s.begin(), s.end(), pile[i]);
    if (count_pile_char != count_s_char) {
      std::cout << "NO" << '\n';
      std::exit(0);
    }
  }

  std::cout << "YES" << '\n';

  return 0;
}
