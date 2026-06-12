#include <iostream>

int main() {
  int n{};
  std::cin >> n;

  int count{};
  for(int i{}; i<n; ++i) {
    std::string polyhedron{};
    std::cin >> polyhedron;
    if (polyhedron == "Tetrahedron") {
      count += 4;
      continue;
    }
    if (polyhedron == "Cube") {
      count += 6;
      continue;
    }
    if (polyhedron == "Octahedron") {
      count += 8;
      continue;
    }
    if (polyhedron == "Dodecahedron") {
      count += 12;
      continue;
    }
    if (polyhedron == "Icosahedron") {
      count += 20;
      continue;
    }
  }
  std::cout << count << '\n';

  return 0;
}
