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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode dummy(0);
        auto tail = &dummy;


        while(l1 != nullptr || l2 != nullptr || carry!=0){
            int digit1 =0;
            int digit2 = 0;

            if(l1 != nullptr){
                digit1 = l1->val;
                l1 = l1->next;
            }
            if(l2 != nullptr){
                digit2 = l2->val;
                l2 = l2->next;
            }

            int val = digit1 + digit2 + carry;

            carry = val/10;

            tail->next = new ListNode(val%10);
            tail = tail->next;
        }

        return dummy.next;
    }
};
