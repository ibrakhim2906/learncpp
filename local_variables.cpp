// preferred to define variables as close as it can be to the point of their
// usage

#include <iostream>

int main() {
  std::cout << "Enter an integer: ";
  int x{};
  std::cin >> x;

  std::cout << "Enter an integer: ";
  int y{};
  std::cin >> y;

  int sum{x + y};
  std::cout << "The sum is: " << sum << "\n";

  return 0;
}
