#include <iostream>
#include <vector>

int main() {
  int size{};
  std::cin >> size;
  std::vector<int> array(size);

  for(int i{}; i<size; ++i) {
    std::cin >> array[i];
  }

  std::vector<int> output(size);
  int count{1};
  for(int i{}; i<size; ++i) {
    output[array[i] - 1] = count;
    count++;
  }

  for(int i{0}; i<size; ++i) {
    std::cout << output[i] << ' ';
  }

  std::cout << '\n';

  return 0;
}
