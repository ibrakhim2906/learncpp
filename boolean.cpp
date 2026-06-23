#include <iostream>

bool isEqual(int x, int y) { return x == y; }

int main()
{
	std::cout << true << "\n";
	std::cout << false << "\n";

	std::cout << std::boolalpha;

	std::cout << true << "\n";
	std::cout << false << "\n";

	bool bFalse{0};
	bool bTrue{0};

	std::cout << bFalse << bTrue << "\n";

	bool b{};
	std::cout << "Enter a boolean value: ";
	std::cin >> b;
	std::cout << "You entered: " << b << "\n";

	std::cout << isEqual(5, 5) << "\n";
	std::cout << isEqual(5, 4) << "\n";
	return 0;
}
