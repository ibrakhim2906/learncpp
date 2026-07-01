#include "pi.h"
#include <iostream>

double circumference(double radius) { return 2.0 * pi() * radius; }

int main()
{
	std::cout << pi() << "\n";

	std::cout << circumference(10) << "\n";

	return 0;
}
