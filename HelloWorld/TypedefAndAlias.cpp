#include <iostream>
#include <vector>

// Typedefs
typedef std::vector<std::pair<std::string, int>> pairtlist_t;
typedef int number_t;

// Using
using text_t = std::string;

int main()
{
	pairtlist_t pairlist;
	number_t age = 29;
	text_t name = "Uallesson";

	std::cout << age << "\n";
	std::cout << name << "\n";


	return 0;
}