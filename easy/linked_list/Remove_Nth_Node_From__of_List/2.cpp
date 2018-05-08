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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //add a dummy node that points to head
        struct ListNode dummy = {0};
        dummy.next = head;

        //create two pointers, slow and faster, pointing to dummy node
        auto slow = &dummy;
        auto fast = &dummy;

        //move faster node n times
        while(n>0){
            fast = fast->next;
            n--;
        }

        //move faster node till the last node
        while(fast->next != nullptr){
            fast = fast->next;
            slow = slow->next;
        }
        //remove the node after slow pointer
        auto node_to_delete = slow->next;
        slow->next = slow->next->next;
        delete node_to_delete;
        //return dummy's next
        return dummy.next;
    }
};
