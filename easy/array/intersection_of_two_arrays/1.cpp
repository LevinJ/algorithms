class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        //create an empty vector res
        vector<int> res;
        //iterate each member in mums1
        for(auto num1 :nums1){
            //if nums is empty , break
            if (nums2.size() == 0) break;
            //if num1 can be found in nums2, add num1 to res, and delete it from nums2
            auto it = std::find(nums2.begin(), nums2.end(), num1);
            if( it != nums2.end()){
                res.push_back(num1);
                nums2.erase(it);
            }
        }
        return res;

    }
};
