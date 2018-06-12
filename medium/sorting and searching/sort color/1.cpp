class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left = 0;
        int right = nums.size() -1;
        int i=0;
        while(i< right +1){

            if(nums[i] == 0){
                std::swap(nums[i] , nums[left++]);
                i++;
            }else if(nums[i] == 2){
                std::swap(nums[i], nums[right--]);
            }else{
                i++;
            }
        }
    }
};