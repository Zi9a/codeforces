#include <algorithm>
#include <iostream>
#include <vector>

bool next_year(std::vector<int> years, int year) {
  for(int i{0}; i < years.size(); ++i) {
    years[i] = year % 10;
    year /= 10;
  }

  for(auto i : years) {
    int count = std::count(years.begin(), years.end(), i);
    if (count > 1) {
      return false;
    }
  }
  return true;
}

int main() {
  int year{};
  std::cin >> year;
  std::vector<int> years(4);

  bool found{ false };
  while(year++) {
    found = next_year(years, year);
    if (found) {
      break;
    }
  }

  std::cout << year << '\n';
  return 0;
}
