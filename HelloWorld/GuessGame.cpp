#include <iostream>

int main()
{
	int num{};
	int guess{};
	int tries{};

	srand(time(NULL));
	num = (rand() % 100) + 1;

	std::cout << "****** NUMBER GUESSING GAME ******";

	do
	{
		std::cout << "Enter a guess between (1-100): ";
		std::cin >> guess;
		tries++;

		if (guess > num)
		{
			std::cout << "Too High!\n";
		}
		else if (guess < num)
		{
			std::cout << "Too Low!\n";
		}
		else
		{
			std::cout << "CORRECT! Number of tries: " << tries << '\n';
		}
	} while (guess != num);

	std::cout << "******  ******";


	return 0;
}