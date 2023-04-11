#include <iostream>
#include <vector>

/* Binary Search
 *
 *
 
Given an array of integers nums which is sorted in ascending order, and an integer target,
write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.
You must write an algorithm with O(log n) runtime complexity.

 

Example 1:
Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4


Example 2:
Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
Explanation: 2 does not exist in nums so return -1
 */

using namespace std;

class BinarySearch
{
public:
	int search(vector<int>& nums, int target)
	{
		int left = 0, right = nums.size() - 1;

		while (left <= right)
		{
			int mid = (left + right) / 2;

			if (nums[mid] == target)
			{
				return mid;
			}
			else if (nums[mid] < target)
			{
				left = mid + 1;
			}
			else
			{
				right = mid - 1;
			}
		}

		return - 1;
	}
};

int main(int argc, char* argv[])
{
	BinarySearch solution;
	vector<int> s = {-1,0,3,5,9,12};
	int result = solution.search(s, 9);

	cout << "Solution: " << result << '\n';

	return 0;
}
