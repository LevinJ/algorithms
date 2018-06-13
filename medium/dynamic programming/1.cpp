bool canJump(vector<int>& nums) {

	  int reachable = 0;
	  for (int i=0; i< nums.size(); i++){
		  int length = nums[i];
		  if (i > reachable)
			  break;
		  reachable = max(reachable, i + length);
	  }

	  return reachable >= nums.size() - 1;

   }
