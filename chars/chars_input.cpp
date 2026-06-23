#include <iostream>

// std::cout is buffered so entering one more character will result in second
// cin being done automatically int main()
// {
// 	char ch{};

// 	std::cin >> ch;
// 	std::cout << "You entered: " << ch << "\n";

// 	std::cin >> ch;
// 	std::cout << "You entered: " << ch << "\n";

// 	return 0;
// }

int main()
{
	char ch{};
	std::cin.get(ch);

	std::cout << "You entered: " << ch << "\n";

	std::cin.get(ch);
	std::cout << "You entered: " << ch << "\n";

	return 0;
}
