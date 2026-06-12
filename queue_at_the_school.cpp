#include <iostream>
#include <utility>
#include <vector>

int main() {
  int length{};
  int time{};
  std::cin >> length >> time;

  std::vector<char> queue(length);
  for(int i{}; i<length; ++i) {
    std::cin >> queue[i];
  }

  for(int i{}; i<time; ++i) {
    bool swapped{false};
    for(int j{}; j<queue.size() - 1; ++j) {
      if (swapped) {
        swapped = false;
        continue;
      }
      if (queue[j] == 'B' && queue[j+1] == 'G') {
        swapped = true;
        std::swap(queue[j], queue[j+1]);
      }
    }
  }

  for (const auto i : queue) {
    std::cout << i;
  }
  std::cout << '\n';

  return 0;
}
