#include <cstdint>
#include <iostream>
#include <numeric>

void solve() {
  std::int64_t a, b, c, m;
  std::cin >> a >> b >> c >> m;
  const std::int64_t a_multiples { m / a };
  const std::int64_t b_multiples { m / b };
  const std::int64_t c_multiples { m / c };

  const std::int64_t ab_multiples { m / std::lcm(a, b) };
  const std::int64_t bc_multiples { m / std::lcm(b, c) };
  const std::int64_t ca_multiples { m / std::lcm(c, a) };

  const std::int64_t abc_multiples { m / std::lcm(std::lcm(a, b), c)};

  const std::int64_t alice{ a_multiples * 6 - (ab_multiples + ca_multiples) * 3 + abc_multiples * 2};
  const std::int64_t bob  { b_multiples * 6 - (ab_multiples + bc_multiples) * 3 + abc_multiples * 2};
  const std::int64_t carol{ c_multiples * 6 - (ca_multiples + bc_multiples) * 3 + abc_multiples * 2};

  std::cout << alice << ' ' << bob << ' ' << carol << '\n';
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
