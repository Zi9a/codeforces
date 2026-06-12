#include <vector>
#include <iostream>


int maximum(int a, int b, int c) {
  int max{a};
  if (b > max) {
    max = b;
  }
  if (c > max) {
    max = c;
  }
  return max;
}

int main() {
  int n{10};
  std::cin >> n;

  std::vector<int> output{};
  while (n--) {
    int a{};
    int b{};
    int c{};
    std::cin >> a >> b >> c;

    int sum = a + b + c;
    int max = maximum(a, b, c);

    if (sum - max == max) {
      output.push_back(1);
    } else {
      output.push_back(0);
    }
  }

  for (auto i : output) {
    std::cout << (i ? "YES" : "NO") << '\n';
  }

  return 0;
}

