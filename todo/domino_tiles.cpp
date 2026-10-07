#include <algorithm>
#include <iostream>
#include <string>

// 00110011

void solve() {
  int n;
  std::cin >> n;

  std::string s;
  std::cin >> s;

  int previous_weight{ 0 };
  for(int i{}; i < s.length(); ++i) {
    if (i != 0) {
      previous_weight = s[i - 1] + s[i];
    }
    if (s[i] != '?') { continue; }
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
