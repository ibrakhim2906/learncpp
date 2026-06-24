#include <iostream>

int main()
{
	std::cout << "Enter a double value: ";
	double num1{};
	std::cin >> num1;

	std::cout << "Enter a double value: ";
	double num2{};
	std::cin >> num2;

	std::cout << "Enter +, -, * or /: ";
	char action{};
	std::cin >> action;

	if (action == '+')
		std::cout << num1 + num2;
	else if (action == '-')
		std::cout << num1 - num2;
	else if (action == '*')
		std::cout << num1 * num2;
	else
		std::cout << num1 / num2;

	return 0;
}
