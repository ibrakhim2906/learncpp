#include "geometry.h"
#include <iostream>

int main()
{
	int length{}, width{};
	std::cin >> length >> width;

	std::cout << getRectangleArea(length, width) << "\n";
	std::cout << getRectanglePerimeter(length, width);

	return 0;
}
