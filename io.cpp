#include <iostream>

int main() {
  std::cout << "Hello, world"
            << std::endl; // endl is not preferred due to it flushing buffer
                          // which can hurt performance

  std::cout << "Hello, world!"
            << "\n";

  int x{5};
  std::cout << "x is equal to: " << x;

  int y{};
  std::cin >> y;

  std::cout << "You entered: " << y << "\n";

  int a{}, b{}, c{};

  std::cout << "Enter three numbers: ";

  std::cin >> a >> y >> c;

  std::cout << "You entered: " << a << y << c;

  return 0;
}
