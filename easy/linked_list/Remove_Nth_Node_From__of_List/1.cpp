class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //get the number of nodes in the list
		int num = 0;
		auto cur = head;
		while(cur !=0){
			num ++;
			cur = cur->next;
		}
		if(num<=1){
			delete head;
			return 0;
		}
		//get the node number to be deleted
		int i = num - n+1;

		if(n==1){
			cur = head;
			num = 0;
			while(cur){
				num++;
				if(num ==i-1){
					delete cur->next;
					cur->next = 0;
					return head;
				}
				cur = cur->next;
			}
		}


		//loop the list, find the node to be deleted
		cur = head;
		num = 0;
		while(cur){
			num++;
			if(num ==i){
				break;
			}
			cur = cur->next;
		}
		//remove the node after cur
		auto node_to_delete = cur->next;
		cur->val = node_to_delete->val;
		cur->next = node_to_delete->next;
		delete node_to_delete;

		return head;
    }
};
