// n = 50 => registered for 50 courses
// k = 20 + 1 => divided into 21 priority levels 
// first k = 20 levels have capacity limits for each => a[i]
// i'th course has level b[i]
// 10th course has level b[i]
//
// adjust all course to wish level k + 1 = 21
//
// we can do this at least 1000 times:
// Select a course i (1≤i≤n), then increase b[i] by 1.
//
// 2 4 1 2 1 1 5 4
// 1 2 4 2 3
// 1 1 1 2 2 4 4 5

#include <iostream>
#include <vector>

void solve() {
  int n, k;
  std::cin >> n >> k;
  std::vector<int> levels(k);
  std::vector<int> initial(n);
  std::vector<int> sequence{};

}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
