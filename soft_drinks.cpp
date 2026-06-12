#include <iostream>

std::int64_t min(std::int64_t a, std::int64_t b, std::int64_t c) {
  std::int64_t result{ a };
  if (b < result) {
    result = b;
  }
  if (c < result) {
    result = c;
  }
  return result;
}

int main() {
  int n, k, l, c, d, p, nl, np;
  std::cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  std::int64_t cold_drink_toasts{(k * l) / nl};
  std::int64_t total_lime_slices{c * d};
  std::int64_t each_grams_of_salt{p / np};
  std::cout << min(cold_drink_toasts, total_lime_slices, each_grams_of_salt) / n << '\n';

  return 0;
}
