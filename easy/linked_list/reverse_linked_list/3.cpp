class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        //create prev point to NULL
        ListNode * prev = NULL;
        //create next point to NULL
        ListNode *next = NULL;
        //loop list till head is empty
        while(head){
            //reverse the list
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        //return prev
        return prev;
    }


};
