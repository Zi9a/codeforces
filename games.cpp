#include <iostream>
#include <utility>
#include <vector>

std::vector<std::pair<int, int>> team_uniforms{};
int output{};

void solve() {
  std::pair<int, int> uniform{};
  std::cin >> uniform.first >> uniform.second;

  for (auto i : team_uniforms) {
    if (uniform.first == i.second ) { output++; }
    if (uniform.second == i.first) { output++; }
  }
  team_uniforms.push_back(uniform);
}

int main() {
  int t{};
  std::cin >> t;

  while (t--) {
    solve();
  }

  std::cout << output << '\n';

  return 0;
}
