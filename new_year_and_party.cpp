#include <iostream>

int main() {
  int n, k;
  std::cin >> n >> k;

  int constest_minutes{4 * 60};
  int minutes_to_solve{constest_minutes - k};
  if (minutes_to_solve < 5) {
    std::cout << 0 << '\n';
    std::exit(0);
  }

  int count{};
  for (int i{1}; i<=n; ++i) {
    if (5 * i <= minutes_to_solve) {
      count++;
      minutes_to_solve -= 5 * i;
    }
  }
  std::cout << count << '\n';

  return 0;
}
