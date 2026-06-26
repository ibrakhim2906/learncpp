#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter your full name: ";
	std::string full_name{};
	std::getline(std::cin >> std::ws, full_name);

	std::cout << "Enter your age: ";
	int age{};
	std::cin >> age;

	std::cout << " Your age + length of your name = "
			  << age + full_name.length();

	return 0;
}
