#include <iostream>

int max(int a, int b, int c, int d) {
  int maximum{a};
  if (b > maximum) { maximum = b; }
  if (c > maximum) { maximum = c; }
  if (d > maximum) { maximum = d; }
  return maximum;
}

int main() {
  int ab, ac, bc, abc;
  std::cin >> ab >> ac >> bc >> abc;
  int max_element  = max(ab, ac, bc, abc);

  if (ab != max_element) { std::cout << max_element - ab << ' '; }
  if (ac != max_element) { std::cout << max_element - ac << ' '; }
  if (bc != max_element) { std::cout << max_element - bc << ' '; }
  if (abc != max_element) { std::cout << max_element - abc << ' '; }
  std::cout << '\n';

  return 0;
}
