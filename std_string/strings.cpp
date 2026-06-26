#include <iostream>
#include <string>

int main()
{
	std::cout
		<< "Hello, world!"; // C-style literal string (C-style variable string
							// are tedious to work with, so other version of
							// strings implementation was introduced.)

	std::string name{"Alex"};
	name = "John";

	std::cout << "My name is: " << name << '\n';

	std::string empty{};
	std::cout << "[" << empty << "]";

	return 0;
}
