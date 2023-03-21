#include <iostream>

int main()
{
	// pseudo-random = NOT truly random (but close)

	srand(time(NULL));

	int randNumber = rand();

	int randFrom1To20 = (rand() % 20) + 1;

	std::cout << randNumber << '\n';
	std::cout << randFrom1To20 << '\n';

	return 0;
}