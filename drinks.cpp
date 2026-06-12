#include <iostream>

int main() {
  int number{};
  std::cin >> number;

  long double result{};
  for(int i{}; i<number; ++i) {
    long double input{};
    std::cin >> input;
    result += input / number;
  }

  std::cout << result << '\n';

  return 0;
}
