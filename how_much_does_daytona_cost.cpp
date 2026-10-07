#include <iostream>
#include <vector>


void solve() {
  int n;
  int k;
  std::cin >> n >> k;

  std::vector<int> arr(n);

  bool ans{false};
  for(int i{}; i<n; ++i) {
    std::cin >> arr[i];
    if (arr[i] == k) {
      ans = true;
    }
  }

  std::cout << (ans ? "YES" : "NO") << '\n';
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
