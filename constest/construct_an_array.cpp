#include <iostream>
#include <vector>

void solve() {
  int n;
  std::cin >> n;
  std::vector<int> arr(n);
  for(int i{1}; i<=n; ++i) {
    bool found{ true };
    for(int j{1}; j<=n; ++j) {
    }
  }
  for (auto i : arr) {
    std::cout << i << ' '; 
  }
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
