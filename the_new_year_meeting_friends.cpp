#include <iostream>

int max(int a, int b, int c) {
  int max_value{ a };
  if (b > max_value) {
    max_value = b;
  }
  if (c > max_value) {
    max_value = c;
  }
  return max_value;
}


int min(int a, int b, int c) {
  int min_value{ a };
  if (b < min_value) {
    min_value = b;
  }
  if (c < min_value) {
    min_value = c;
  }
  return min_value;
}

int main() {
  int a{};
  int b{};
  int c{};
  std::cin >> a >> b >> c;
  int minimum{ min(a, b, c) };
  int maximum{ max(a, b, c) };
  std::cout << maximum - minimum << '\n';

  return 0;
}
