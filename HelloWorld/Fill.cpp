#include <iostream>

int main()
{
	// Fills a range of elements with a specified value
	constexpr int size = 100;
	std::string foods[size];

	fill_n(foods, size, "Pizza");

	for (const std::string &food : foods)
	{
		std::cout << food << '\n';
	}

	// Fills the half of the array with a specified value
	const int new_size = 100;
	std::string new_foods[new_size];

	fill(new_foods, new_foods + (new_size / 2), "Pizza");
	fill(new_foods + (new_size / 2), new_foods + new_size, "Hamburger");

	for (const std::string &food : new_foods)
	{
		std::cout << food << '\n';
	}

	return 0;
}