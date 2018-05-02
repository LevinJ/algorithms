class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if(nums.size()<=1){
            return {};
        }
        for(unsigned int i=0; i<= nums.size()-2;i++){
            for(unsigned int j=i+1; j<=nums.size()-1;j++){
                int sum = nums[i] + nums[j];
                if(sum==target){
                    return {i,j};
                }
            }
        }
        return {};

    }
};
