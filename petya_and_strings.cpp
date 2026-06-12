#include <cctype>
#include <iostream>
#include <string>

int main()  {
  std::string string_one{};
  std::string string_two{};

  std::cin >> string_one >> string_two;
  auto length{string_one.length()};

  for (char &c : string_one) {
      c = std::toupper(static_cast<unsigned char>(c));
  }
  for (char &c : string_two) {
      c = std::toupper(static_cast<unsigned char>(c));
  }
  if (string_one == string_two) {
    std::cout << 0;
    return 0;
  }

  bool string_one_greater{ false };
  bool string_two_greater{ false };

  for(int i{0}; i<length; ++i) {
    if (string_one[i] > string_two[i]) {
      string_one_greater = true;
      break;
    }
    if (string_two[i] > string_one[i]) {
      string_two_greater = true;
      break;
    }
  }

  if (string_one_greater) {
    std::cout << 1;
  }
  if (string_two_greater) {
    std::cout << -1;
  }
  return 0;
}
