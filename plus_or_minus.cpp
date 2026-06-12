#include <iostream>

void solve() {
  int a, b, c;
  std::cin >> a >> b >> c;
  if (a + b == c) {
    std::cout << '+' << '\n';
    return;
  }
  if (a - b == c) {
    std::cout << '-' << '\n';
  }
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
