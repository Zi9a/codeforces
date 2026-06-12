#include <cctype>
#include <iostream>
#include <string>

void solve() {
  std::string yes{};
  std::cin >> yes;
  for (auto& i : yes) {
    i = std::tolower(i);
  }
  std::cout << (yes == "yes" ? "YES" : "NO") << '\n';
}

int main() {
  int t{};
  std::cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}
