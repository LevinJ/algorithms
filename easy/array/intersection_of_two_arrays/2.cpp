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

// If the given array is already sorted, and the memory is limited, and (m << n or m >> n).
// Time:  O(min(m, n) * log(max(m, n)))
// Space: O(1)
// Binary search solution.

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
        auto start_it = nums2.cbegin();
        for(const auto& num1 : nums1){
            start_it = std::lower_bound(start_it, nums2.cend(), num1);
            if(start_it == nums2.cend()){
                break;
            }
            if(*start_it == num1 ){
                res.emplace_back(num1);
                ++start_it;
            }

        }
        return res;
    }
};

// If the given array is already sorted, and the memory is limited or m ~ n.
// Time:  O(m + n)
// Soace: O(1)
// Two pointers solution.


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        //sort two arrays
        std::sort(nums1.begin(), nums1.end());
        std::sort(nums2.begin(), nums2.end());

        //initialize two pointers
        auto it1 = nums1.cbegin();
        auto it2 = nums2.cbegin();
        //crate result vector
        vector<int> res;

        //loop till one of the ponters is at its end
        while(it1 != nums1.cend() && it2 != nums2.cend()){
             //move the smaller value pointer ahead
            if (*it1 < *it2){
                ++it1;
            }else if (*it1 > *it2){
                ++it2;
            }else{
                 //if two pointer value are equal, move both pointers
                res.emplace_back(*it1);
                ++it1;
                ++it2;
            }
        }
        return res;



    }
};





