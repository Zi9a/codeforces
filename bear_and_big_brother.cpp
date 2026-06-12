#include <iostream>

int main() {
  int a, b;
  std::cin >> a >> b;

  int count{};
  while (true) {
    if(a > b) {
      break;
    }
    a *= 3;
    b *= 2;
    count++;
  }
  std::cout << count;
  return 0;
}
