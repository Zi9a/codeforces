#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

void solve(int n) {
  std::vector<int> cards{};

  for(int i{}; i<n; ++i) {
    std::cin >> cards.emplace_back();
  }

  int sereja_cards{};
  int dima_cards{};

  bool flip{ true };
  while (cards.size() > 0) {
    int max{ std::max(*std::begin(cards), *(std::end(cards) - 1)) };
    if (flip) {
      sereja_cards += max;
    } else {
      dima_cards += max;
    }
    flip = !flip;

    if (max == *std::begin(cards)) {
      cards.erase(std::begin(cards));
    } else {
      cards.erase(std::end(cards) - 1);
    }
  }

  std::cout << sereja_cards << ' ' << dima_cards << '\n';
}

int main() {
  int n{};
  std::cin >> n;

  solve(n);

  return 0;
}
