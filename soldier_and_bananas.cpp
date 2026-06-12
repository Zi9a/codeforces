#include <iostream>

int main() {
  int first_banana_cost{};
  int soldier_money{};
  int number_of_banana{};

  std::cin >> first_banana_cost >> soldier_money >> number_of_banana;

  int cost{};
  for (int i{0}; i < number_of_banana; ++i) {
    cost += first_banana_cost * (i + 1);
  }
  if (soldier_money > cost) {
    std::cout << 0;
  } else {
    std::cout << cost - soldier_money;
  }

  return 0;
}
