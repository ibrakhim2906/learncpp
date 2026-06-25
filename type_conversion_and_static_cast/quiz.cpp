#include <iostream>

int main()
{
	std::cout << "Enter a single character: ";
	char ch{};
	std::cin >> ch;
	int char_code{ch};

	std::cout << "You entered \'" << ch << "\', which has ASCII code "
			  << char_code << "\n";
	return 0;
}
