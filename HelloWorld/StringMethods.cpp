#include <iostream>
#include <string>

int main()
{
	std::string name;

	std::cout << "Enter your name: ";
	std::getline(std::cin, name);

	if (name.empty())
	{
		std::cout << "Please enter your name: ";
		std::getline(std::cin, name);
	}

	std::cout << "Hello: " << name << '\n';

	std::cout << name.length() << '\n';
	std::cout << name.append("@gmail.com") << '\n';
	std::cout << name.at(1) << '\n';
	std::cout << name.find('N') << '\n';
	std::cout << name.insert(0, "@") << '\n';
	std::cout << name.erase(0, 1) << '\n';

	return 0;
}