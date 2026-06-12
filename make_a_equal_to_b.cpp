#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <iterator>

std::vector<int> output{};

void input(std::vector<int>& arr) {
  for(int i{0}; i<std::size(arr); ++i) {
    std::cin >> arr[i];
  }
}

void solve() {
  int size{};
  std::cin >> size;
  std::vector<int> a(size);
  std::vector<int> b(size);
  input(a);
  input(b);

  int sum{};
  for(int i{}; i<size; ++i) {
    sum += a[i];
  }
  for(int i{}; i<size; ++i) {
    sum -= b[i];
  }

  int count{};
  for(int i{}; i<size; ++i){
    count += a[i] ^ b[i];
  }

  int answer {std::min(count, std::abs(sum )+ 1)};
  output.push_back(answer);
}

int main() {
  int iterations;
  std::cin >> iterations;
  for(int i{0}; i<iterations; ++i) {
    solve();
  }

  for (auto i : output) {
    std::cout << i << '\n';
  }

  return 0;
}
