class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(auto num : nums){
            res = res ^ num;
        }
        return res;

    }
};



class Solution {
public:
    int singleNumber(vector<int>& nums) {
       return std::accumulate(nums.cbegin(), nums.cend(), 0, std::bit_xor<int>());
    }
};
