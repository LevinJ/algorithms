class Solution {
    private:
    void recur(vector<int>nums, vector<int> item,  vector<vector<int>>  &res){
        if(nums.size() == 0) {
        	res.push_back(item);
        	return;
        }

        for(unsigned int i=0; i< nums.size(); i++){
            auto temp_vec = nums;
            temp_vec.erase(temp_vec.begin() + i);
            auto temp = item;
            temp.push_back(nums[i]);
            recur(temp_vec, temp, res);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;

        recur(nums, {}, res);
        return res;
    }
};
