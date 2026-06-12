#include <iostream>

int main() {
  int x;
  std::cin >> x;

  int steps{};
  while (true) {
    if(x >= 5) {
      steps+= 1;
      x -= 5;
      continue;
    }
    switch (x) {
      case 1: steps+= 1; x -= 1; continue;
      case 2: steps+= 1; x -= 2; continue;
      case 3: steps+= 1; x -= 3; continue;
      case 4: steps+= 1; x -= 4; continue;
    }
    if (x == 0) {
      break;
    }
  }
  std::cout << steps;
  return 0;
}
