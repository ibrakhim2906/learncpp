#include <iostream>

int main()
{
	constexpr int x{7};
	constexpr int y{4};

	std::cout << x / y << "\n";
	std::cout << static_cast<double>(x) / y;
}
