class Solution {
private:
    void recur(vector<int> nums, int n, vector<int> item, vector<vector<int>> &res){
        //base case
        if(n == item.size()){
            if(std::is_sorted(item.begin(), item.end())){
                res.push_back(item);
            }
            return;
        }

        //recursion
        for(unsigned int i=0; i< nums.size(); i++){
            auto temp_vec = nums;
            temp_vec.erase(temp_vec.begin() + i);
            auto temp = item;
            temp.push_back(nums[i]);
            recur(temp_vec, n, temp, res);
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;

        for(int n=0; n<= nums.size(); n++){
            recur(nums, n, {}, res);
        }
        return res;
    }
};
