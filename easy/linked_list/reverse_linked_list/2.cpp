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
        //base case, exit when head or head->next is nullptr
        if(head == nullptr || head->next == nullptr) return head;
        //reverse the remaining list head->next
        auto h = reverseList(head->next);
        //push the head to the tail
        head->next->next = head;
        //set head->next as nullptr
        head->next = nullptr;
        //return the head
        return h;

    }
};



class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        auto newhead = head;
        reverseList_recursive(&newhead);
        return newhead;
    }

    void reverseList_recursive(ListNode** phead) {
        //save a copy of current head
		auto cur = *phead;
		//if current node or node->next is empty, exit
		if(cur == nullptr || cur->next == nullptr) return;
		//reverse the remaining list *phead = *phead->next, call reverse
		*phead = cur->next;
		reverseList_recursive(phead);
		//push the cur node to the tail
		cur->next->next = cur;
		//set old head->next as zero
		cur->next = nullptr;

    }
};



class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        auto newhead = head;
        reverseList_recursive(&newhead);
        return newhead;
    }

    void reverseList_recursive(ListNode** phead) {
        //save a copy of current head
		auto cur = *phead;
		//if current node or node->next is empty, exit
		if(cur == nullptr || cur->next == nullptr) return;
		//reverse the remaining list *phead = *phead->next, call reverse
        auto rest = cur->next;

		reverseList_recursive(&rest);
		//push the cur node to the tail
		cur->next->next = cur;
		//set old head->next as zero
		cur->next = nullptr;
        *phead = rest;

    }
};
