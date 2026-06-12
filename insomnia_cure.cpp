#include <cstdlib>
#include <iostream>

int main() {
  int k{};
  int l{};
  int m{};
  int n{};
  int d{};
  std::cin >> k >> l >> m >> n >> d;

  int hurt_dragon{};
  for(int i{1}; i<=d; ++i) {
    if (i % k == 0) {
      hurt_dragon++;
      continue;
    }
    if (i % l == 0 && i % k != 0) {
      hurt_dragon++;
      continue;
    }
    if (i % m == 0 && i % l != 0 && i % k != 0) {
      hurt_dragon++;
      continue;
    }
    if (i % n == 0 && i % m != 0 && i % l != 0 && i % k != 0) {
      hurt_dragon++;
      continue;
    }
  }

  std::cout << hurt_dragon << '\n';

  return 0;
}
