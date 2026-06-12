#include <array>
#include <iostream>

int main() {
  int n{};
  std::cin >> n;

  int result{};
  constexpr std::array<int, 5> denomination{100, 20, 10, 5, 1};
  for(int i{}; i<denomination.size(); ++i) {
    int count{n / denomination[i]};
    n -= denomination[i] * count;
    result += count;
  }

  std::cout << result << '\n';

  return 0;
}
