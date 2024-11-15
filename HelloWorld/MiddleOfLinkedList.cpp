#include <iostream>

/* Middle of the Linked List

Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.

 

Example 1:
Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.


Example 2:
Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.
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

class MiddleNode
{
public:
	ListNode* middleNode(ListNode* head)
	{
		ListNode *slow = head, *fast = head;

		while (fast != NULL && fast->next != NULL)
		{
			slow = slow->next;
			fast = fast->next->next;
		}

		return slow;
	}
};

int main(int argc, char* argv[])
{
	return 0;
}
