#include <iomanip>
#include <iostream>

int main()
{
	std::cout << std::setprecision(17);
	std::cout << 9.87654321f << "\n";

	std::cout << 0.0000987654321f << "\n";

	return 0;
}
