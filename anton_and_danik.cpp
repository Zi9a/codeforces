#include <iostream>
#include <vector>

int main() {
  int n{};
  std::cin >> n;
  std::vector<char> games(n);
  for(auto i : games) {
    std::cin >> games.emplace_back();
  }

  int count{};
  for(auto i : games) {
    if (i == 'A') {
      count++;
    }
    if (i == 'D') {
      count--;
    }
  }

  if (count > 0) {
    std::cout << "Anton";
  } else if (count < 0) {
    std::cout << "Danik";
  } else {
    std::cout << "Friendship";
  }

  return 0;
}
