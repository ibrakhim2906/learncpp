#include "square.h"
#include <iostream>

int x;

int main()
{
	std::cout << "a square has " << getSquareSides() << " sides\n";
	std::cout << "a square of length 5 has perimeter length of "
			  << getSquarePerimeter(5) << "\n";
	std::cout << x << "\n";
	return 0;
}
