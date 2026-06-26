#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter your full name: ";
	std::string name{};
	// std::cin >> name;
	std::getline(std::cin >> std::ws, name);

	std::cout << "Enter your favorite color: ";
	std::string color{};
	// std::cin >> color;
	std::getline(std::cin >> std::ws, color);

	std::cout << "Your name is " << name << " and your favorite color is "
			  << color << "\n";

	int length{static_cast<int>(name.length())};
	std::cout << name << " has " << name.length() << " characters\n";
	return 0;
}
