#include <iostream>
#include <string>

int main()
{
	int x = 10;
	int y = 30;

	int max{};

	max = ((y > x) ? x : y);

	constexpr int z{5};

	std::cout << ((z != 5) ? std::to_string(z) : std::string{"x is 5"});
}
