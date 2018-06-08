class Solution {
private:
    void recur(string digits, string tmp, vector<string> &res, vector<string> &lookup){
        int len = digits.length();
        if(len==0){
            res.push_back(tmp);
            return;
        }
       // cout<<"ok"<<digits<<endl;
        int digit_index = std::stoi(string(1, digits[0]));

        for(auto &c: lookup[digit_index]){
            recur(digits.substr(1,len-1), tmp+string(1,c), res, lookup);
        }

    }

public:
    vector<string> letterCombinations(string digits) {
        if(digits.length() ==0) return {};
        vector<string> res;
        vector<string> lookup = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string tmp = "";
        recur(digits, tmp, res, lookup);
        return res;

    }
};
