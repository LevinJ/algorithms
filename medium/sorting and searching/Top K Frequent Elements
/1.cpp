class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;

        unordered_map<int, int> counts;
        for(const auto &i:nums){
            ++counts[i];
        }
        vector<vector<int>> buckets(nums.size() + 1);
        for(const auto &kvp:counts){
            buckets[kvp.second].emplace_back(kvp.first);
        }

        for(int i=buckets.size()-1; i>0; i--){
            for(const auto& n:buckets[i]){
                res.emplace_back(n);
                if(res.size() == k){
                    return res;
                }
            }
        }
        return res;
    }
};
