#include <iostream>

int isAllowed()
{
	std::cout << "How tall are you?\n";

	double height{};
	std::cin >> height;

	return height > 140.0;
}

int main()
{
	if (isAllowed())
	{
		std::cout << "Allowed\n";
	}
	else
	{
		std::cout << "Not Allowed\n";
	}
	return 0;
}
