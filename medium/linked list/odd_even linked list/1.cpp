class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        auto odd = head;
        auto even = head->next;
        auto even_head = even;

        while(!(!even || !even->next)){
            auto next_odd = even->next;
            auto next_even = next_odd? next_odd->next: nullptr;

            odd->next = next_odd;
            even->next = next_even;

            odd = next_odd;
            even = next_even;
        }
        //put even list head to odd tail
        odd->next = even_head;
        return head;
    }
};
