class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if (nums.size()<=1){
            return false;
        }
        for(int i=0; i<= nums.size()-2; i++){
            for(int j = i+1; j<=nums.size()-1; j++){
                if (nums[i] == nums[j]){
                    return true;
                }
            }
        }
        return false;
    }
};
