#include <iostream>
#include <vector>

/* Rotate Array

Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
 

Example 1:
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]

Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

Example 2:
Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]

Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
 */

using namespace std;

class RotateArray
{
public:
	vector<int> rotate(vector<int>& nums, int k)
	{
		int n = nums.size();
		vector<int> result(n);

		for (int i = 0; i < n; i++)
		{
			result[(i + k) % n] = nums[i];
		}

		for (int i = 0; i < n; i++)
		{
			nums[i] = result[i];
		}

		return result;
	}
};

int main(int argc, char* argv[])
{
	RotateArray solution;
	vector<int> s = { 1,2,3,4,5,6,7 };
	vector<int> result = solution.rotate(s, 3);

	cout << "Solution: ";
	copy(result.begin(), result.end(), ostream_iterator<int>(cout));
	cout << '\n';

	return 0;
}
