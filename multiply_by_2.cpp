#include <iostream>

int main() {
  int x{0};
  std::cout << "Enter an integer: ";
  std::cin >> x;

  std::cout << "Double " << x << " is: " << x * 2 << "\n";
  std::cout << "Triple " << x << " is: " << x * 3;

  return 0;
}
