class Solution {
public:
    vector<string> letterCombinations(string digits) {

        vector<string> res;
        if(digits.length() ==0) return {};
        res = {""};
        vector<string> lookup = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        for(auto &digit :digits){
            auto temp = move(res);
            res.clear();

            auto digit_index = std::stoi(string(1,digit));
            for(auto &c: lookup[digit_index]){
                for(auto &t: temp){
                    res.emplace_back(t+ string(1,c));
                }
            }
        }

        return res;
    }
};
