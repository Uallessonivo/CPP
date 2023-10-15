#include <iostream>

double get_total(double prices[], int size);

int main()
{
	double prices[] = {49.50, 23.23, 16.07, 75};
	int size = sizeof(prices) / sizeof(prices[0]);
	const double total = get_total(prices, size);

	std::cout << "$" << total << std::endl;
	std::cout << sizeof(prices) / sizeof(double) << std::endl;

	return 0;
}

double get_total(double prices[], int size)
{
	double total = 0;

	for (int i = 0; i < size; i++)
	{
		total += prices[i];
	}

	return total;
}
