#include <iostream>

int readNumber();
int writeAnswer(int result);

int main()
{
	int first{readNumber()};
	int second{readNumber()};

	int result{first + second};

	writeAnswer(result);

	return 0;
}

int readNumber()
{
	int num;

	std::cin >> num;

	return num;
}

int writeAnswer(int result)
{

	std::cout << result << "\n";
	return result;
}
