#include <iostream>

int main(int argc, char* argv[])
{
	// sizeof() = determines the size in bytes.
	const std::string name = "Uallesson";
	const double gpa = 2.5;

	std::cout << sizeof(gpa) << " bytes\n";
	std::cout << sizeof(name) << " bytes\n";

	const char grade = 'F';
	const bool student = true;
	const char grades[] = { 'A', 'B', 'C', 'D', 'F' };

	// number of elements
	std::cout << sizeof(grades)/sizeof(char) << " elements\n";


	return 0;
}
