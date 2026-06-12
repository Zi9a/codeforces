#include <iostream>

void solve() {
  int a, b, c, d;
  std::cin >> a >> b >> c >> d;

  int count{};
  if (b > a) { count++; }
  if (c > a) { count++; }
  if (d > a) { count++; }
  std::cout << count << ' ';
  std::cout << '\n';
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
