#include <iostream>

int main()
{
	unsigned int u1{5};

	int s1{static_cast<int>(u1)};
	std::cout << s1 << "\n";

	int s2{5};

	unsigned int u2{static_cast<unsigned int>(s2)};
	std::cout << u2 << "\n";

	int s{-1};
	std::cout << static_cast<unsigned int>(s) << "\n";

	unsigned int u{4294967295};
	std::cout << static_cast<int>(u) << "\n";

	return 0;
}
