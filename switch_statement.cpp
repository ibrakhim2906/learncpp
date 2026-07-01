#include <iostream>

void printDigitName(int x)
{
	switch (x)
	{
	case 1:
		std::cout << "One";
		return;
	case 2:
		std::cout << "Two";
		return;
	case 3:
		std::cout << "Three";
		return;
	default:
		std::cout << "Unknown";
		return;
	}
}

// interesting usage of switch statement

bool isVowel(char c)
{
	switch (c)
	{
	case 'a': // if c is 'a'
	case 'e': // or if c is 'e'
	case 'i': // or if c is 'i'
	case 'o': // or if c is 'o'
	case 'u': // or if c is 'u'
	case 'A': // or if c is 'A'
	case 'E': // or if c is 'E'
	case 'I': // or if c is 'I'
	case 'O': // or if c is 'O'
	case 'U': // or if c is 'U'
		return true;
	default:
		return false;
	}
}

int main()
{
	printDigitName(2);
	std::cout << "\n";

	return 0;
}
