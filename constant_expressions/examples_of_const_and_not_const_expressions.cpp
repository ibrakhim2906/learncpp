#include <iostream>

int getNumber()
{
	std::cout << "Enter a numbers: ";
	int y{};
	std::cin >> y;

	return y;
}

int five() { return 5; }

int main()
{
	5;
	1.2;
	"Hello, world!";

	5 + 6;
	1.2 * 3.4;
	8 - 5.6;

	sizeof(int) + 1;

	getNumber();
	five();

	std::cout << 5;

	const int a{5};
	const int b{a};
	const long c{a + 2};

	int d{5};
	const int e{d};
	const double f{1.2};
	return 0;
}
