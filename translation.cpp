#include <iostream>

int main() {
  std::string s{};
  std::string t{};
  std::cin >> s >> t;

  if (s.length() != t.length()) {
    std::cout << "NO";
    return 0;
  }

  for(int i{}; i<s.length(); ++i) {
    if (s[i] != t[s.length() - 1 - i]) {
      std::cout << "NO";
      return 0;
    }
  }
  std::cout << "YES";
  return 0;
}
