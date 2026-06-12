#include <algorithm>
#include <iostream>
#include <vector>

void solve() {
  int n;
  std::cin >> n;
  std::vector<int> array(n);
  for(auto& i : array) {
    std::cin >> i;
  }

  int mx{ 0 };
  for(int i{ 0 }; i < array.size() - 1; ++i) {
    if (array[i] > array[i + 1]) {
      int k = array[i] - array[i + 1];
      mx = std::max(k, mx);
    }
  }

  for(int i{ 0 }; i < array.size() - 1; ++i) {
    if (array[i] > array[i + 1]) {
      array[i + 1] += mx;
    }
  }

  if(std::is_sorted(array.begin(), array.end())) {
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
