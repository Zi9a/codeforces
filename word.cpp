#include <cctype>
#include <iostream>

int main() {
  std::string str{};
  std::cin >> str;

  int count{};
  for (auto i: str) {
    if (std::islower(i)) {
      count++;
    } else if (std::isupper(i)) {
      count--;
    }
  }


  if (count >= 0) {
    for (auto &i : str) {
      i = tolower(i);
    }
  } else if (count < 0) {
    for (auto &i : str) {
      i = toupper(i);
    }
  }

  std::cout << str;

  return 0;
}
