#include <iostream>

int main() {
  int stops{};
  std::cin >> stops;

  int capacity{};
  int onboard_passengers{};
  for(int i{}; i<stops; ++i) {
    int entered_passengers{};
    int exited_passengers{};
    std::cin >> exited_passengers >> entered_passengers;


    if (entered_passengers > exited_passengers) {
      onboard_passengers += entered_passengers - exited_passengers;
    } else if (exited_passengers > entered_passengers) {
      onboard_passengers -= exited_passengers - entered_passengers;
    }

    if (onboard_passengers > capacity) {
      capacity = onboard_passengers;
    }
  }
  std::cout << capacity << '\n';

  return 0;
}
