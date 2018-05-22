class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        //create empty result
        vector<vector<int>> res;
        //check all i,j,k combination
        int len = nums.size();
        for(int i=0; i<= len-3; i++){
            if(nums[i]>0){
                break;
            }
            for(int j=i+1; j<=len-2; j++){
                for(int k=j+1; k<=len-1; k++){
                    vector<int> triplet = {nums[i], nums[j], nums[k]};
                    int sum = process_vec(triplet, res);
                    if(sum>0){
                        break;
                    }
                }
            }
        }
        return res;
    }
private:
        int process_vec(vector<int> &triplet, vector<vector<int>> &res){
             //if a combination is equal to zero and has no dupicates in result, add it to result.
            auto sum = std::accumulate(triplet.begin(), triplet.end(), 0);
            if(sum !=0) return sum;
            //sort the triplet
            std::sort(triplet.begin(), triplet.end());
            bool has_duplicate = false;
            for(const auto& vec: res){
                if(vec == triplet){
                    has_duplicate = true;
                    break;
                }
            }
            if(has_duplicate) return 0;
            res.push_back(move(triplet));
            return 0;
        }




};
