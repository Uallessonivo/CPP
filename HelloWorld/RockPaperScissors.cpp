#include <iostream>
#include <ctime>

char get_user_choice();
char get_computer_choice();
void show_choice(char choice);
void choose_winner(char player, char computer);

int main()
{
	const char player = get_user_choice();
	const char computer = get_computer_choice();

	std::cout << "You choice: ";
	show_choice(player);

	std::cout << "Computer choice: ";
	show_choice(computer);

	choose_winner(player, computer);

	return 0;
}

char get_computer_choice()
{
	srand(time(0));
	int num = rand() % 3 + 1;

	switch (num)
	{
	case 1: return 'r';
	case 2: return 'p';
	case 3: return 's';
	}

	return 0;
}

char get_user_choice()
{
	char player;
	std::cout << "Rocker-Paper-Scissors Game!\n";

	do
	{
		std::cout << "Choose one of the following\n";
		std::cout << "***************************\n";
		std::cout << "'r' for rock\n";
		std::cout << "'p' for paper\n";
		std::cout << "'s' for scissors\n";
		std::cin >> player;
	}
	while (player != 'r' && player != 'p' && player != 's');

	return 0;
}

void show_choice(const char choice)
{
	switch (choice)
	{
	case 'r': std::cout << "Rock\n";
		break;
	case 'p': std::cout << "Paper\n";
		break;
	case 's': std::cout << "Scissors\n";
		break;
	default: std::cout << "Invalid choice";
		break;
	}
}

void choose_winner(const char player, const char computer)
{
	switch (player)
	{
	case 'r': if (computer == 'r')
		{
		std::cout << "It's a tie! \n";
		}
		else if (computer == 'p')
		{
		std::cout << "You lose! \n";
		}
		else
		{
		std::cout << "You win! \n";
		}
		break;
	case 'p': if (computer == 'r')
	{
		std::cout << "You win!  \n";
	}
			else if (computer == 'p')
	{
		std::cout << "It's a tie! \n";
	}
			else
	{
		std::cout << "You lose! \n";
	}
			break;
	case 's': if (computer == 'r')
	{
		std::cout << "You lose  \n";
	}
			else if (computer == 'p')
	{
		std::cout << "You win! \n";
	}
			else
	{
		std::cout << "You lose! \n";
	}
			break;
	}
}



