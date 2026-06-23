#include <iostream>

int abs(int x)
{
	if (x < 0)
		return -x;

	return x;
}

int main()
{
	int x{4};
	if (x)
		std::cout << "hi\n";
	else
		std::cout << "bye\n";

	std::cout << abs(4) << "\n";
	std::cout << abs(-3) << "\n";

	return 0;
}
