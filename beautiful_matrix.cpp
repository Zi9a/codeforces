#include <algorithm>
#include <cassert>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <utility>

constexpr int row{5};
constexpr int column{5};

void print(int a[][5]) {
  for(int i{0}; i<row; ++i) {
    for (int j{0}; j < column; ++j) {
      std::cout << a[i][j] << ' ';
    }
    std::cout << '\n';
  }
}

void swapRow(int a[][5], int row) {
  assert(row >= 0 && row < 5);
  for(int i{0}; i<5; ++i) {
    std::swap(a[row][i], a[row+1][i]);
  }
}

void swapColumn(int a[][5], int column) {
  assert(column >= 0 && column < 5);
  for(int i{0}; i<5; ++i) {
    std::swap(a[i][column], a[i][column+1]);
  }
}

std::pair<int, int> findOne(int a[][5]) {
  for(int i{0}; i<row; ++i) {
    for (int j{0}; j < column; ++j) {
      if (a[i][j] == 1) {
        return {i, j};
      }
    }
  }
  return {-1, -1};
}

int main() {

  int a[row][column];
  int size{std::size(a)};

  for(int i{0}; i<row; ++i) {
    for (int j{0}; j < column; ++j) {
      std::cin >> a[i][j];
    }
  }

  int count{0};
  while (true) {
    std::pair pairPoint = findOne(a);
    if (pairPoint == std::pair{-1, -1}) {
      std::cerr << "invalid";
      std::exit(69);
    }

    if (pairPoint.first > 2) {
      swapRow(a, pairPoint.first - 1);
      count++;
    }
    if (pairPoint.first < 2) {
      swapRow(a, pairPoint.first);
      count++;
    }
    if (pairPoint.second > 2) {
      swapColumn(a, pairPoint.second - 1);
      count++;
    }
    if (pairPoint.second < 2) {
      swapColumn(a, pairPoint.second);
      count++;
    }
    if (pairPoint == std::pair{2, 2}) {
      break;
    }
  }
  std::cout << count;

  return 0;
}
