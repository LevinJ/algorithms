class Solution {
public:
    bool isPalindrome(ListNode* head) {
        //put all the data into an vector
	   vector<int> vec;
	   while(head){
		   vec.emplace_back(head->val);
		   head = head->next;
	   }

	   //check if the vector is palindrome
	   int size = vec.size();
	   for(int i=0; i< size/2; i++){
		   if(vec[i] != vec[size-i-1]){
			   return false;
		   }
	   }
	   return true;
    }
};
