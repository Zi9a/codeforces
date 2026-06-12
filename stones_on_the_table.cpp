#include <iostream>
#include <string>

int main() {
  int a{};
  std::cin >> a;
  std::string str{};
  std::cin >> str;

  int count{};
  for (int i{0}; i < str.length() - 1; ++i) {
    if (str[i] == str[i+1]) {
      count++;
    }
  }
  std::cout << count;

  return 0;
}
