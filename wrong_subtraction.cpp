#include <iostream>

int main() {
  int n{}, k{};
  std::cin >> n >> k;

  for(int i{}; i<k; ++i) {
    if (n % 10 == 0) {
      n /=10;
      continue;
    }
    n--;
  }
  std::cout << n;
  return 0;
}
