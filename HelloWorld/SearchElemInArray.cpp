#include <iostream>

int search_array(int array[], int size, int element);

int main()
{
	int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int size = std::size(numbers);
	int index;
	int my_num;

	std::cout << "Enter element to search for: " << '\n';
	std::cin >> my_num;

	index = search_array(numbers, size, my_num);

	if (index != -1)
	{
		std::cout << my_num << "is at index " << index;
	}
	else
	{
		std::cout << my_num << "is not in the array ";
	}

	return 0;
}

int search_array(int array[], int size, int element)
{
	for (int i = 0; i < size; i++)
	{
		if (array[i] == element)
		{
			return i;
		}
	}

	return -1;
}