#include <iostream>

void print(int x) { std::cout << x << "\n"; }

int main()
{
	print(static_cast<int>(5.5));

	char ch{97};
	std::cout << ch << " has value " << static_cast<int>(ch) << "\n";

	return 0;
}
