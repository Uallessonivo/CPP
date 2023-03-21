#include <iostream>

int globalNum = 2;

int main()
{
	int scopedNum = 1;
	std::cout << scopedNum;

	return 0;
}

void printNum()
{
	std::cout << globalNum;
}