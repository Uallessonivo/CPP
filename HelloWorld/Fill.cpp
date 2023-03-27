#include <iostream>


int main()
{
	// Fills a range of elements with a specified value
	constexpr int size = 100;
	std::string foods[size];

	fill_n(foods, size, "Pizza");

	for (const std::string& food : foods)
	{
		std::cout << food << '\n';
	}

	return 0;
}