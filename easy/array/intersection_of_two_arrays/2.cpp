// If the given array is not sorted and the memory is unlimited:
//   - Time:  O(m + n)
//   - Space: O(min(m, n))
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        //inssit that nums1 < nums2
        if(nums1.size() > nums2.size()){
            return intersect(nums2, nums1);
        }
        //store all of the items in unordered_map
        unordered_map<int, int> temp_map;
        for(const auto& num1: nums1){
            ++temp_map[num1];
        }
        //create an empty res vector
        vector<int> res;

        //iterate through nums2,
        for(const auto& num2 : nums2){
            //if the count of num2 are found to be nonzero, add it to res, remove 1 count from map
            if(temp_map[num2]>0){
                --temp_map[num2];
                res.emplace_back(num2);
            }
        }
        //return res
        return res;

    }
};

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        //make sure nums1 < nums2
        if(nums1.size() > nums2.size()){
            return intersect(nums2, nums1);
        }
        //sort nums1, nums2
        std::sort(nums1.begin(), nums1.end());
        std::sort(nums2.begin(), nums2.end());
        //create vector res
        vector<int> res;
        //iterate nums1, start check position of nums
        for(const auto& num1 : nums1){
            auto start_it
        }
        auto start_it = nums2.cbegin()
        //check if we can find lower_bound of num1 in nums2
        //if it's end(), break
        //it's it's found, if it's equal, emplace_back to res, and also move it to found position

    }
};




