#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>
int main() {
  int num{};
  std::cin >> num;
  std::vector<int> arr(num);
  for (auto& i : arr) {
    std::cin >> i;
  }

  auto it {arr.begin() + 1};
  std::vector<int> depth{};
  while(it != arr.end() - 1) {
    int i = 1;
    int count{};
    while(*(it - i) == *(it + i)) {
      count++;
      ++i;
    }
    depth.push_back(count);
    it++;
  }

  depth.push_back(0);
  depth.insert(depth.begin(), 0);

  int count{};
  while (true) {
    if (depth.empty()) {
      break;
    }
    int max {std::ranges::max(arr)};
    if (max == 0) {
      count += arr.size();
      std::cout << count << '\n';
      break;
    }
    for(int i{}; i<arr.size(); ++i) {
      if (depth[i] == max) {
        arr.erase(arr.begin() + i);
        for(int j{}; j<max; ++j) {
          arr.erase(arr.begin() + i - j );
          arr.erase(arr.begin() + i + j );
        }
      }
    }
  }

  std::cout << "arr: ";
  for (auto i : arr) {
    std::cout << i << ' ';
  }
  std::cout << '\n';
  std::cout << "count: " << count << '\n';

  return 0;
}
