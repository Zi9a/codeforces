#include <iostream>

int main() {
  int weight;
  std::cin >> weight;
  if (weight == 2)  {
    std::cout << "NO" ;
    return 0;
  }
  std::cout << (weight % 2 == 0 ? "YES" : "NO");
  return 0;
}
