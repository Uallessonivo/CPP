#include <iostream>
#include <vector>

/* Remove Nth Node From End of List

Given the head of a linked list, remove the nth node from the end of the list and return its head.

 

Example 1:
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]

Example 2:
Input: head = [1], n = 1
Output: []

Example 3:
Input: head = [1,2], n = 1
Output: [1]
 */

using namespace std;

struct ListNode
{
	int val;
	ListNode* next;

	ListNode() : val(0), next(nullptr)
	{
	}

	ListNode(int x) : val(x), next(nullptr)
	{
	}

	ListNode(int x, ListNode* next) : val(x), next(next)
	{
	}
};

class RemoveNodeFrom
{
public:
	ListNode* removeNthFromEnd(ListNode* head, int n)
	{
		auto dummy = new ListNode(0);

		dummy->next = head;

		auto slow = dummy;
		auto fast = dummy;

		for (int i = 0; i < n + 1; i++)
		{
			fast = fast->next;
		}

		while (fast != NULL)
		{
			slow = slow->next;
			fast = fast->next;
		}

		if (slow != NULL)
		{
			slow->next = slow->next->next;
		}

		return dummy->next;
	}
};

int main(int argc, char* argv[])
{
	return 0;
}
