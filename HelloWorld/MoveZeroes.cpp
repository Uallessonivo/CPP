#include <iostream>
#include <vector>

/* Move Zeroes

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Example 2:
Input: nums = [0]
Output: [0]
 */

using namespace std;

class MoveZeroes
{
public:
	vector<int> moveZeroes(vector<int>& nums)
	{
		int n = nums.size();
		vector<int> result(n);
		int nonZeroIndex = 0;

		for (int i = 0; i < n; i++)
		{
			if (nums[i] != 0)
			{
				swap(nums[i], nums[nonZeroIndex]);
				nonZeroIndex++;
			}
		}

		return result;
	}
};

int main(int argc, char* argv[])
{
	MoveZeroes solution;
	vector<int> s = { 0,1,0,3,12 };
	vector<int> result = solution.moveZeroes(s);

	cout << "Solution: ";
	copy(result.begin(), result.end(), ostream_iterator<int>(cout));
	cout << '\n';

	return 0;
}
