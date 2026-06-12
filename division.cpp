#include <iostream>

void solve() {
  int n;
  std::cin >> n;
  if (n <= 1399) { std::cout << "Division 4" << '\n'; return; }
  if (n <= 1599) { std::cout << "Division 3" << '\n'; return; }
  if (n <= 1899) { std::cout << "Division 2" << '\n'; return; }
  std::cout << "Division 1" << '\n';
}

int main() {
  int t;
  std::cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}
