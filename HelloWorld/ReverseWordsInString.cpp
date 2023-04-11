#include <iostream>
#include <vector>

/* Reverse Words in a String III
 *
 
Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

Example 1:
Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"

Example 2:
Input: s = "God Ding"
Output: "doG gniD"
 */

using namespace std;

class ReverseWords
{
public:
	string reverseWords(string s)
	{
		string result{};
		string temp{};

		for (char c : s)
		{
			if (c != ' ')
			{
				temp += c;
			}
			else
			{
				reverse(temp.begin(), temp.end());
				result += temp + " ";
				temp = "";
			}
		}

		reverse(temp.begin(), temp.end());
		result += temp;
		return result;
	}
};

int main(int argc, char* argv[])
{
	ReverseWords solution;
	string s = "Let's take LeetCode contest";
	string reversed = solution.reverseWords(s);

	cout << "Solution: " << reversed <<	'\n';

	return 0;
}
