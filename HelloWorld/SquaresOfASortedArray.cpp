#include <iostream>
#include <vector>

/* Squares of a Sorted Array

Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.



Example 1:
Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]

Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].

Example 2:
Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]
 */

using namespace std;

class SquaresOfSortedArray
{
public:
	vector<int> sortedSquares(vector<int>& nums)
	{
		int n = nums.size();
		vector<int> result (n);
		int left = 0, right = n - 1;

		for (int i = n - 1; i >= 0; i--)
		{
			if (abs(nums[left]) > abs(nums[right]))
			{
				result[i] = nums[left] * nums[left];
				left++;
			}
			else
			{
				result[i] = nums[right] * nums[right];
				right--;
			}
		}

		return result;
	}
};

int main(int argc, char* argv[])
{
	SquaresOfSortedArray solution;
	vector<int> s = { -4,-1,0,3,10 };
	vector<int> result = solution.sortedSquares(s);

	cout << "Solution: ";
	copy(result.begin(), result.end(), ostream_iterator<int>(cout));
	cout << '\n';

	return 0;
}
