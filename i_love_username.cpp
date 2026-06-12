#include <iostream>
#include <vector>

int main() {
  int n{};
  std::cin >> n;
  std::vector<int> scores(n);
  for(int i{}; i<n; ++i) {
    std::cin >> scores[i];
  }

  int count{};

  int max{scores[0]};
  int min{scores[0]};
  for(int i{}; i<n; ++i) {
    for(int j{i - 1}; j >= 0; --j) {
      if (scores[i] > max) {
        max = scores[i];
        count++;
      }
      if (scores[i] < min) {
        min = scores[i];
        count++;
      }
    }
  }

  std::cout << count << '\n';

  return 0;
}
