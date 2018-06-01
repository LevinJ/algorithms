class Solution {
private:
   ListNode* recur(ListNode* head, bool odd){
       //base case
       if(odd){
           if(!head || !head->next || !head->next->next){
               return head;
           }
       }
       ListNode * next_odd = nullptr;
       if(odd){
           next_odd = head->next->next;
        }
       auto new_tail = recur(head->next, !odd);
       if(odd){
           head->next = next_odd;
       }else{
         auto even_head = new_tail->next;
           new_tail->next = head;
           head->next = even_head;
       }
       return new_tail;
   }
public:
    ListNode* oddEvenList(ListNode* head) {
        recur(head, true);
        return head;
    }
};
