class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       if(nums.size()<1) return 0;
        //define max_ending_here and max_so_far
    	int max_ending_here = nums[0];
    	int max_so_far = nums[0];
    	//bottom up loop (1, nums.size()), from i-1 to i,
    	for(int i=1; i< nums.size(); i++){
    		max_ending_here = max(nums[i], max_ending_here + nums[i]);
    		max_so_far = max(max_so_far, max_ending_here);
    	}
    	return max_so_far;
    }
};
