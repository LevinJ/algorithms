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
    bool hasCycle(ListNode *head) {
        //if the head is empty or has no next, return false
        if(!head || !head->next) return false;
        //save visited nodes
        unordered_set<ListNode *> lookup;
        lookup.insert(head);
        //create tail point to head
        auto tail = head->next;
        //loop the list till tail is empty,  return true if tail == head
        while(tail){
            if(lookup.find(tail) != lookup.end()){
                return true;
            }
            lookup.insert(tail);
            tail = tail->next;
        }

        //return false
        return false;
    }
};
