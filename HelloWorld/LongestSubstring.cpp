#include <iostream>
#include <vector>

/* Longest Substring Without Repeating Characters
 *
 *

Given a string s, find the length of the longest substring without repeating characters.

 

Example 1:
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.


Example 2:
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.


Example 3:
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.


Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 */

using namespace std;

class LongestSubstring
{
public:
	int lengthOfLongestSubstring(string s)
	{
		int left = 0, right = s.size() - 1;

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

		return -1;
	}
};

int main(int argc, char* argv[])
{
	LongestSubstring solution;
	string s = "abcabcbb";
	int result = solution.lengthOfLongestSubstring(s);

	cout << "Solution: " << result << '\n';

	return 0;
}
