#include <iostream>

int main()
{
	std::string cars[] = {"Corvette", "Mustang", "Camry"};

	cars[0] = "Chevrolet";

	std::cout << cars << '\n';
	std::cout << cars[1] << '\n';

	std::string names[5];

	names[0] = "Uallesson";
	names[1] = "Uallesson";
	names[2] = "Uallesson";
	names[3] = "Uallesson";

	std::cout << names << '\n';

	// Iterating over a array - 1st Solution
	for (int i = 0; i < names->length(); i++)
	{
		std::cout << "1st Solution: " << names[i] << '\n';
	}

	// Iterating over a array - 2st Solution
	for (int i = 0; i < sizeof(names) / sizeof(std::string); i++)
	{
		std::cout << "2st Solution: " << names[i] << '\n';
	}

	// For each
	for (std::string name : names)
	{
		std::cout << name << '\n';
	}

	return 0;
}
