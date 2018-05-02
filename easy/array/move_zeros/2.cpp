class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //retrun if nums size is less than or equal to 1
        if(nums.size() <=1) return;

       int pos = 0;

       for(auto& num : nums){
           if(num){
               std:swap(num, nums[pos]);
               pos++;
           }
       }
    }
};
