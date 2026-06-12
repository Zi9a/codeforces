#include <cstdlib>
#include <iostream>

void solve() {
  std::string ticket{};
  std::cin >> ticket;

  int first{};
  int last{};
  for(int i{}; i<3; ++i) {
    first += ticket[i] - '0';
    last += ticket[5 - i] - '0';
  }
  if (first == last) {
    std::cout << "YES" << '\n';
  } else {
    std::cout << "NO" << '\n';
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
