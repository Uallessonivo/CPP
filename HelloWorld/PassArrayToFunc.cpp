#include <iostream>

double get_total(double prices[]);
int main()
{
	double prices[] = { 49.99, 15.06, 75, 9.99 };
	double total = get_total(prices);

	std::cout << "$" << total;

	return 0;
}

double get_total(double prices[])
{
	double total = 0;

	for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
	{
		total += prices[i];
	}

	return total;
}
