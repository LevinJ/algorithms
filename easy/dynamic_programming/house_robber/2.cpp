class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        vector<int>lookup(n, 0);
        if(n>=1) lookup[0] = nums[0];
        if(n>=2) lookup[1] = max(nums[0], nums[1]);
        for(int i=2; i< n; i++){
            lookup[i] = max(lookup[i-1], lookup[i-2] + nums[i]);
        }
        return lookup[n-1];
    }
};




class Solution {
public:
    unordered_map<int, int> lookup;
    int rob(vector<int>& nums) {
        return rob_recursive(nums, 0, nums.size());
    }

    int rob_recursive(vector<int>& nums, int start, int end){
        //base case
        int n = nums.size();
        if(end == 0) return 0;
        if(end == 1) return nums[0];
        if(end == 2) return max(nums[0], nums[1]);
        if(lookup.find(end) != lookup.end()) return lookup[end];
        lookup[end] =  max(rob_recursive(nums, start, end -1), rob_recursive(nums, start, end-2) + nums[end-1]);
        return lookup[end];

    }
};
