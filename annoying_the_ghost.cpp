#include <iostream>
#include <utility>
#include <vector>

void solve() {
  int n;
  std::cin >> n;
  std::vector<int> a(n);
  std::vector<int> b(n);

  int sum_a{};
  for(int i{}; i < n; ++i) {
    std::cin >> a[i];
    sum_a += a[i];
  }
  int sum_b{};
  for(int i{}; i < n; ++i) {
    std::cin >> b[i];
    sum_b += b[i];
  }

  if (sum_a > sum_b) {
    std::cout << -1 << '\n';
    return;
  }

  int count{};
  // 3 2 2 1
  // 1 2 3 4

  // 0 1 2 3
  // ^
  for (int i{}; i < n; ++i) { 
    for (int j{}; j < n - i - 1; ++j) {
      if (a[j] > a[j + 1] && b[j + 1] >= a[j + 1]) {
        std::swap(a[j], a[j + 1]);
        count++;
      }
    }
  }
  std::cout << count << '\n';
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
