#include <iostream>
#include <vector>

int main() {
  int n, h;
  std::cin >> n >> h;
  std::vector<int> heights(n);
  
  int width{};
  for (int i{}; i < n; ++i) {
    std::cin >> heights[i];
    if (heights[i] > h) {
      width += 2;
    } else {
      width++;
    }
  }

  std::cout << width;

  return 0;
}
