#include <iostream>
#include <iterator>

void solve() {
  int n;
  std::cin >> n;
  std::string str;
  std::cin >> str;
  // abaa

  bool erase{ false };
  for(int i{ 1 }; i < n - 1; ++i) {
    if (str[i - 1] == str[i + 1]) {
      str.erase(str.begin() + i);
      erase = true;
      break;
    }
  }

  if (!erase) {
    for(int i{ 1 }; i < std::size(str) - 1; i++) {
      if (str[i] != str[i-1]) {
        str.erase(str.begin() + i);
        break;
      }
    }
  }

  for(int i{ 0 }; i < std::size(str) - 1; ++i) {  // 2 => 0 1
    if (str[i] == str[i + 1]) {
      str.erase(str.begin() + i + 1);
      i--;
    }
  }

  std::cout << std::size(str) << '\n';
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
