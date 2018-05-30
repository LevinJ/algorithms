class Solution {

public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size() < 3){
            return false;
        }
        int min_val = numeric_limits<int>::max();
        int sec_min_val = numeric_limits<int>::max();

        for(auto& num:nums){
            if(num <=min_val){
                min_val = num;
            }else if(num < sec_min_val){
                sec_min_val = num;
            } else if(num > sec_min_val){
                return true;
            }
        }
        return false;
    }
};
