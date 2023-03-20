#include <iostream>

int main()
{
	// break = break out of a loop
	// continue = skip the current iteration

	for (int i = 1; i <= 10; i++)
	{
		if (i == 13)
		{
			// will jump the 13
			continue;
		}
		std::cout << i << '\n';
	}
	

	return 0;
}