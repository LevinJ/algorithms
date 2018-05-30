/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
private:
    void insert_digit(ListNode *& head, ListNode *& tail, int digit){
        ListNode *p = new ListNode(digit);
        if(head == nullptr){
            head = p;
            tail = p;
            return;
        }
        tail->next = p;
        tail = p;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = nullptr;
        ListNode *tail = nullptr;

        int flag = 0;
        while(l1 != nullptr || l2 != nullptr){
            int digit1 = 0;
            int digit2 = 0;

            if(l1 != nullptr){
                digit1 = l1->val;
                l1 = l1->next;
            }
            if(l2 != nullptr){
                digit2 = l2->val;
                l2 = l2->next;
            }
           // cout<<digit1<<", "<<digit2<<endl;
            int temp = digit1 + digit2 + flag;
            int digit = temp%10;
            flag = temp/10;
           // cout<<"insert: "<<digit<<", "<<flag<<endl;
            insert_digit(head, tail,digit);
        }

        if(flag!=0) {
            insert_digit(head, tail,flag);
        }
        return head;
    }
};
