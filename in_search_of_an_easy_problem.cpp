#include <iostream>

int main() {
  int opinions{};
  std::cin >> opinions;

  bool hard{};
  for(int i{0}; i<opinions; ++i) {
    int review{};
    std::cin >> review;
    hard |= review;
  }

  if (hard) {
    std::cout << "HARD" << '\n';
  } else {
    std::cout << "EASY" << '\n';
  }

  return 0;
}
