#include <iostream>
#include <vector>

/* Reverse String
 *

Write a function that reverses a string. The input string is given as an array of characters s.
You must do this by modifying the input array in-place with O(1) extra memory.

 

Example 1:
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

Example 2:
Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
 */

using namespace std;

class ReverseString
{
public:
	vector<char> reverseString(vector<char>& s)
	{
		int left = 0, right = s.size() - 1;

		while (left < right)
		{
			char temp = s[left];
			s[left] = s[right];
			s[right] = temp;
			left++;
			right--;
		}

		return s;
	}
};

int main(int argc, char* argv[])
{
	ReverseString solution;
	vector<char> s = { 'h', 'e', 'l', 'l', 'o' };
	vector<char> reversed = solution.reverseString(s);

	cout << "Solution: ";
	copy(reversed.begin(), reversed.end(), ostream_iterator<char>(cout));
	cout << '\n';

	return 0;
}
