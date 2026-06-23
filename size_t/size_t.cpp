#include <cstddef>
#include <iostream>

int main()
{
	std::int64_t x{5};

	std::size_t s{sizeof(x)};
	std::cout << s << '\n';

	return 0;
}
