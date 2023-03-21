#include <iostream>

double get_total(double prices[]);

int main()
{
	double prices[] = { 49.50, 23.23, 16.07, 75};
	const double total = get_total(prices);

	std::cout << "$" << total;

	return 0;
}

double get_total(double prices[])
{
	double total = 0;

	for (const double price : prices)
	{
		total += price;
	}

	return total;
}
