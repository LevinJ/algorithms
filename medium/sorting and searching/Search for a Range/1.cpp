class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto start = lower_bound(nums.cbegin(), nums.cend(), target);
        auto end = upper_bound(nums.cbegin(), nums.cend(), target);

        if(start!=nums.cend() && *start == target){
            return {start - nums.cbegin(), end-nums.cbegin()-1};
        }
        return {-1,-1};
    }
};
