#include <iostream>

int main()
{
	std::cout << "Input a keyboard character: ";

	char ch{};
	std::cout << ch << "\n";
	std::cin >> ch;
	std::cout << "You entered: " << ch << "\n";

	return 0;
}
