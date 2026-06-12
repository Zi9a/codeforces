#include <iostream>

int main() {
  int n{};
  std::cin >> n;

  int sum{};
  int count{};
  while (n--) {
    int num{};
    std::cin >> num;
    sum += num;
    if (sum < 0) {
      count -= num;
      sum -= num;
    }
  }

  std::cout << count << '\n';

  return 0;
}
