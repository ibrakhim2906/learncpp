#include <iostream>

int returnValueFromUser() {
  std::cout << "Enter an integer: ";
  int x{};

  std::cin >> x;

  return x;
}

int main() {
  int x{returnValueFromUser()};

  int y{returnValueFromUser()};

  std::cout << x << " + " << y << " = " << x + y << "\n";

  return 0;
}
