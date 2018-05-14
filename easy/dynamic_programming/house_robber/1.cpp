class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return nums[0];
        if(nums.size() == 2) return max(nums[0], nums[1]);
        int max_prev_2 = nums[0];
        int max_prev_1 = max(nums[0], nums[1]);
        int max_cur = 0;
        for(int i=2; i< nums.size(); i++){
        	max_cur = max(max_prev_1, max_prev_2 + nums[i]);
        	//prepare for next iteration
        	max_prev_2 = max_prev_1;
        	max_prev_1 = max_cur;

        }
        return max_cur;
    }
};
