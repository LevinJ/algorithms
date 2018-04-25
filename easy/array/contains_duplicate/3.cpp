class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool> temp_map;
        for(auto num: nums ){
           if(temp_map.find(num) != temp_map.end()) return true;
            temp_map[num] = true;
        }
        return false;
    }
};
