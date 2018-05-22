class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       //create empty lookup hash table
        unordered_map<int, int> lookup;
        //loop nums, i from 0, to nums.size()
        for(int i=0; i<nums.size();i++){
            //if current num has no corresponiding number in lookup table, push it hashtable
            //otherwise get out i,j
            if(lookup.find(target - nums[i]) == lookup.end()){
                lookup[nums[i]] = i;
                continue;
            }
            return {i, lookup[target - nums[i]]};

        }
        return {};
    }
};
