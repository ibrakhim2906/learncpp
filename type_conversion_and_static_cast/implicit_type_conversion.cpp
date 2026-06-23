#include <iomanip>
#include <iostream>

void print(double x)
{
	std::cout << std::setprecision(5);
	std::cout << x << "\n";
}

int main()
{
	print(5);

	return 0;
}
