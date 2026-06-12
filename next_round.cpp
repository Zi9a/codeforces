#include <cassert>
#include <cstdlib>
#include <iostream>
#include <vector>

int main() {
  int n, k;
  std::cin >> n >> k;
  assert(n >= k);

  std::vector<int> player{};
  for (int i{0}; i < n; ++i) {
    int a{};
    std::cin >> a;
    if (a > 0) {
      player.push_back(a);
    }
  }
  if (player.empty()) {
    std::cout << 0;
    std::exit(0);
  }

  int count{(int)player.size()};
  if (count > k) count = k;

  for(int i{k - 1}; i < n; ++i) {
    if(player[i] != player[i+1]) {
      break;
    }
    count++;
  }

  std::cout << count;
  return 0;
}
