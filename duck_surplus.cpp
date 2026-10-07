#include <cstdint>
#include <iostream>
#include <utility>
#include <vector>


void solve() {
  int n;
  std::cin >> n;
  std::vector<std::int64_t> arr(n);
  for(int i{ 0 }; i < n; ++i) {
    std::cin >> arr[i];
  }

  for(int i{ 0 }; i < n - 1; ++i) {
    if (arr[i] > arr[i + 1]) {
      std::swap(arr[i], arr[i+1]);
      arr[i + 1] += arr[i];
    }
  }
  std::cout << arr[n - 1] << '\n';
}

int main() {
  int t;
  std::cin >> t;

  while (t--) {
    solve();
  }
  return 0;
}

