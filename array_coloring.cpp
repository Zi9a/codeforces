#include <iostream>

void solve() {
  int n {};
  std::cin >> n;

  int x {};
  int sum {};

  for(int i{}; i< n; ++i) {
    std::cin >> x;
    sum += x;
  }

  std::cout << (sum % 2 ? "NO" : "YES") << '\n';
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
