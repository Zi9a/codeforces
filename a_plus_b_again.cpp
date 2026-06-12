#include <iostream>

void solve() {
  int a;
  std::cin >> a;
  int second{ a % 10 };
  a /= 10;
  int first{ a % 10 };
  std::cout << second + first << '\n';
}

int main() {
  int t;
  std::cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}
