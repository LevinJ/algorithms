class Solution {
public:
    Solution(vector<int> nums): backup(nums){
    }

    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return backup;
    }

    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        vector<int> nums(backup);
         std::random_device rd;  //Will be used to obtain a seed for the random number engine
        std::mt19937 gen(rd());
        int n = nums.size();
       //loop from 0 to n-2, fill in each slot
        for(int i=0; i< n-1; i++){
            //get a random number from i to n-1
            std::uniform_int_distribution<int> dis(i, n-1);
            int j = dis(gen);
            swap(nums[i], nums[j]);
        }
        return nums;
    }
private:
    const vector<int> backup;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(nums);
 * vector<int> param_1 = obj.reset();
 * vector<int> param_2 = obj.shuffle();
 */
