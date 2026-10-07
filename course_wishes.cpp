// codeforces.com:
// 2216A - Course Wishes

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <vector>

void solve() {
  int n, k;
  std::cin >> n >> k;

  std::vector<int> a(k);
  std::vector<int> b(n);

  for(auto& i : a) { std::cin >> i; }
  for(auto& i : b) { std::cin >> i; }

  std::vector<int> ans_steps{};

  bool ans { true };
  int limit{1000};
  while (true) {
    for(int i{ 0 }; i<k; ++i) {
      int current = std::ranges::count(b, i + 1);
      if (current == a[i]) {
        for(int j{ 0 }; j<n; ++j) {
          if (b[j] == k) {
            b[j]++;
            ans_steps.push_back(j + 1);
            current++;
          }
        }
      }
      if (current < a[i]) { // 1 < 3
        for(int j{ 0 }; j<n; ++j) {
          if (current == a[i]) { break; } // 2 == 3
          if (b[j] == i || b[j] == k) {
            b[j]++;
            ans_steps.push_back(j + 1);
            current++;
          }
        }
      }
    }

    auto all_same = std::all_of(b.begin(), b.end(), [&](int a) {
      return a == k + 1;
    });
    if (all_same) {
      break;
    }
    if (limit-- == 0) {
      ans = false;
      break;
    }
  }

  if (!ans) {
    std::cout << -1 << '\n';
    return;
  }

  std::cout << std::size(ans_steps) << '\n';
  for (auto i : ans_steps) {
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

