class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode dummy = {0};
    	auto tail = &dummy;
    	//loop till l1 and l2 are both nullptr
    	while(l1 || l2){
    		//if l1 is empty, append all the nodes in l2, and break
    		if(l1 == nullptr){
    			tail->next = l2;
    			break;
    		}
    		//if l2 is empty, append all the nodes in l1, and break
    		if(l2 == nullptr){
    			tail->next = l1;
    			break;
    		}
    		//compare the value in l1 and l2, append the node with smaller value, reset tail, increment the smaller node pointer
    		if(l1->val <= l2->val){
    			tail->next = l1;
    			tail = l1;
    			l1 = l1->next;
    		}else{
    			tail->next = l2;
    			tail = l2;
    			l2 = l2->next;
    		}
    	}
    	return dummy.next;

    }
};
