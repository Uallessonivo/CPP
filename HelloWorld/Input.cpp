#include <iostream>
#include <string>

int main()
{
	std::string name;
	int age;

	std::cout << "What's your name? ";
	std::getline(std::cin, name); // can get spaces from input

	std::cout << "What's your age? ";
	std::cin >> age;

	std::cout << "Hello" << name << age << "years old!";

	return 0;
}