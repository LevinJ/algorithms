class Solution {

public:
    bool increasingTriplet(vector<int>& nums) {
        int len = nums.size();
        vector<int> min_arr(len);
        vector<int> max_arr(len);

        int min_val = numeric_limits<int>::max();
        int max_val = numeric_limits<int>::min();

        for(int i=0; i<len; i++){
            if(nums[i] < min_val){
                min_val = nums[i];
            }
            min_arr[i] = min_val;
        }

        for(int i=len-1; i>=0; i--){
            if(nums[i] > max_val){
                max_val = nums[i];
            }
            max_arr[i] = max_val;
        }

        for(int i=0; i<len; i++){
            if(nums[i] > min_arr[i] && nums[i] < max_arr[i]){
                return true;
            }
        }
        return false;
    }
};
