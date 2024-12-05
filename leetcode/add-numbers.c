struct ListNode {
    int val;
    struct ListNode *next;
};
#include <stdlib.h>
#include <stdio.h>

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
	struct ListNode *head = calloc(sizeof(struct ListNode), 1);
	struct ListNode *iter;
	iter = head;
	while (l1 || l2)
	{
		if (iter)
		if (l1)
		{
			iter->val += l1->val;
			l1 = l1->next;
		}
		if (l2)
		{
			iter->val += l2->val;
			l2 = l2->next;
		}
		printf("iter->val: %d\n", iter->val);
		if (iter->val > 9)
		{
			iter->next = calloc(sizeof(struct ListNode), 1);
			iter->next->val = iter->val / 10;
			iter->val = iter->val % 10;
		}
		if (!iter->next && (l1 || l2))
			iter->next = calloc(sizeof(struct ListNode), 1);
		iter = iter->next;
	}
	return head;
}