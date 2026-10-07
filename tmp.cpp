#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

// a = 1 2 3
// b = 1 2 4 2 4

void solve() {
  int n, k;
  std::cin >> n >> k;

  std::vector<int> a(k);
  std::vector<int> b(n);

  for(auto& i : a) { std::cin >> i; }
  for(auto& i : b) { std::cin >> i; }

  int ans{};
  std::vector<int> ans_steps{};

  while (true) {
    for (int i{}; i < n; ++i) {
      if (b[i] == k + 1) { continue; }
      if (b[i] == k) {
        b[i]++;
        ans++;
        ans_steps.push_back(i + 1);
        continue;
      }

      if (b[i] == k - 1) {
        b[i]++;
        ans++;
        ans_steps.push_back(i + 1);
        continue;
      }


      auto count = std::count(b.begin(), b.end(), b[i]);
      if (count < a[b[i] - 1]) {
        b[i]++;
        ans++;
        ans_steps.push_back(i + 1);
      }
    }

    if (ans > 1000) {
      ans = -1;
      break;
    }

    auto all_same = std::all_of(b.begin(), b.end(), [&](int a) {
      return a == k + 1;
    });
    if (all_same) {
      break;
    }
  }

  if (ans == -1) {
    std::cout << ans << '\n';
    return;
  }

  std::cout << ans << '\n';
  for(auto i : ans_steps) {
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
