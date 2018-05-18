class Solution {
public:
    vector<int> backup;
    Solution(vector<int> nums) {
        backup = nums;
    }

    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return backup;
    }

    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        vector<int> nums = backup;
        int n = (int) nums.size();
        for(int i=n-1; i>=1; i--){
            //select a random element from [0,i] to i
            int j = rand()% (i+1);
            swap(nums[j], nums[i]);
        }
        return nums;

    }
};
