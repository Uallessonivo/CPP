#include <iostream>

int main()
{
	// ternary op ?: = replacement to an if/else statement
	// cond ? exp1 : exp2;

	int grade = 75;

	// If/Else
	if (grade >= 60)
	{
		std::cout << "You pass!";
	}
	else
	{
		std::cout << "You fail!";
	}

	// Ternary operations
	grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail!";

	return 0;
}