#include <iostream>
#include <string>

int main() {
  std::string a{};
  std::string b{};
  std::cin >> a >> b;

  for(int i{}; i<a.length(); ++i) {
    if (a[i] == b[i]) {
      std::cout << '0';
    } else {
      std::cout << '1';
    }
  }
  std::cout << '\n';

  return 0;
}
