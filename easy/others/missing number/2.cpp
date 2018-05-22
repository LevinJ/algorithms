class Solution {
public:
    int missingNumber(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        //get array length
        int len = nums.size();

        //set left and right point to 0 and len-1
        int left = 0;
        auto right = len;
        //while loop, left < right
        while(left < right){
             //get mid value, if it's equal to its indes, then move left forward
            //otherwise move right forward
            int mid = left + (right-left)/2;
            if(mid == nums[mid]){
                left = mid + 1;
            }else{
                right = mid;
            }
        }
        //return right pointer
        return right;
    }
};
