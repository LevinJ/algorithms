// Time:  O(n)
// Space: O(n)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> nums_set(nums.begin(), nums.end());
        return nums_set.size() != nums.size();
    }
};




// Time:  O(nlogn)
// Space: O(1)
class Solution2 {
public:
    bool containsDuplicate(vector<int>& nums) {
    	sort(nums.begin(), nums.end());
		auto new_it = unique(nums.begin(), nums.end());
		if(new_it != nums.end()) return true;
		return false;
    }
};
