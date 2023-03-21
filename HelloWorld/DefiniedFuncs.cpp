#include <iostream>

void sayHelloToUser(std::string name, int age)
{
	std::cout << "Hello " << name << "!" << '\n';
	std::cout << "You have " << age << "years old!" << '\n';
}

int main()
{
	sayHelloToUser("Uallesson", 29);
	return 0;
}