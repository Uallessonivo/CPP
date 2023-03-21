#include <iostream>

void bakePizza()
{
	std::cout << "Here is your pizza! \n";
}

void bakePizza(std::string topping)
{
	std::cout << "Here is your " << topping << "pizza! \n";
}

void bakePizza(std::string topping1, std::string topping2)
{
	std::cout << "Here is your " << topping1 << "and" << topping2 << "pizza! \n";
}

int main()
{
	bakePizza();
	bakePizza("Peperoni");
	bakePizza("Mussarela", "Cheddar");
	return 0;
}