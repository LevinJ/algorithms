class Solution {
private:
    vector<int>::iterator lower_bound(vector<int> &nums, int target){
        int left = 0;
        int right = nums.size()-1;

        while(left<right){
            const auto mid = left + (right - left)/2;

            if(nums[mid] >= target){
                right = mid;
            }else{
                left = mid+1;
            }
        }

        return nums.begin() + left;
    }

    vector<int>::iterator upper_bound(vector<int> &nums, int target){
        int left = 0;
        int right = nums.size();

        while(left<right){
            const auto mid = left + (right - left)/2;

            if(nums[mid] > target){
                right = mid;
            }else{
                left = mid+1;
            }
        }

        return nums.begin() + left;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto start = lower_bound(nums,  target);
        auto end = upper_bound(nums, target);

        if(start!=nums.cend() && *start == target){
            return {start - nums.cbegin(), end-nums.cbegin()-1};
        }
        return {-1,-1};
    }
};
