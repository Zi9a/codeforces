#include <iostream>
#include <vector>

int main() {
  int n{};
  std::cin >> n;
  
  int little_x{};
  std::cin >> little_x;
  std::vector<int> x_levels(little_x);
  for(int i{}; i<little_x; ++i) {
    std::cin >> x_levels[i];
  }

  int little_y{};
  std::cin >> little_y;
  std::vector<int> y_levels(little_y);
  for(int i{}; i<little_y; ++i) {
    std::cin >> y_levels[i];
  }

  for(int i{}; i<little_x; ++i) {
    bool contains{false};
    for(int j{}; j<little_y; ++j) {
      if (x_levels[i] == y_levels[j]) {
        contains = true;
      }
    }
    if (!contains) {
      y_levels.push_back(x_levels[i]);
    }
  }

  int x{};
  for(int i{1}; i<=n; ++i) {
    x ^= i;
  }
  for(int i{}; i<y_levels.size(); ++i) {
    x^= y_levels[i];
  }

  if (x == 0) {
    std::cout << "I become the guy." << '\n';
  } else {
    std::cout << "Oh, my keyboard!" << '\n';
  }
  return 0;
}
