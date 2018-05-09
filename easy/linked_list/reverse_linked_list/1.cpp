/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

		//point prev and cur to first and second node
		auto prev = (ListNode*)nullptr;
		auto cur = head;


		//loop over cur, till it's empty
		while(cur != nullptr){
			//move prev and cur formward, reverse the list
			auto next = cur->next;
			cur->next = prev;
			prev = cur;
			cur = next;
		}
		//return prev as the new head
		return prev;
    }
};
