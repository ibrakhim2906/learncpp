#include <iostream>

#define IDENTIFIER
#define SUB_TEXT "this will be subbed in in place of SUB_TEXT in compile time"

#define PRINT_JOE

int main()
{

#ifdef PRINT_JOE
	std::cout << "JOE";
#endif

#ifndef PRINT_BOB
	std::cout << "BOB";
#endif

#if 0
	std::cout
		<< "this will not be compiled while digit after if is set to zero";
#endif
}
