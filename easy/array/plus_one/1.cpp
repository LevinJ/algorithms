// Time:  O(n)
// Space: O(n)

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        //initialize result vector to be reverse of digit
        vector<int> res(digits.rbegin(), digits.rend());

        //add carry one
        int carry = 1;
        for(auto& digit : res){
            int num = digit + carry;
            digit = num %10;
            carry = num / 10;
        }
        // if we still one carry, push it to result vector
        if(carry == 1){
            res.emplace_back(carry);
        }

        //reverse the result vector
        reverse(res.begin(), res.end());
        return res;
    }
};
