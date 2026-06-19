#include <iostream>

int getValueFromUser() {
  std::cout << "Enter an integer: ";
  int input{};
  std::cin >> input;

  return input;
}

void printDoubleValue(int x) {
  std::cout << x << " doubled is " << x * 2 << "\n";
}

int add(int x, int y) { return x + y; }

int main() {

  int num{getValueFromUser()};

  printDoubleValue(num);

  std::cout << add(6, 7) << "\n";

  return 0;
}

// Optional arguments how to define them

void foo(int) {}

int doubleNumber(int x) { return x * 2; }
