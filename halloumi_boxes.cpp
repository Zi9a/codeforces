#include <iostream>
#include <vector>

void solve() {
  int n, k;
  std::cin >> n >> k;

  std::vector<int> nums{};
  for(int i{}; i<n; ++i) {
    std::cin >> nums.emplace_back();
  }

  bool sorted{ true };
  for(int i{0}; i<n-1; ++i) {
    if (nums[i] > nums[i+1]) {
      sorted = false;
    }
  }
  if (sorted) {
    std::cout << "YES\n";
    return;
  }
 
  if (k <= 1 && !(n <= 1)) {
    std::cout << "NO\n";
    return;
  }
  std::cout << "YES\n";
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
