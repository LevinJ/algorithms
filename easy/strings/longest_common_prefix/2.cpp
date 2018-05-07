class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

       //create result string res
        string res;
        //if array is empty, return res
        if(strs.empty()) return res;
        //loop strs[0]'s i from 0 to len(strs[0])
        for(int i=0; i< strs[0].length(); i++){
            //loop all strings in strs
            for(const auto & str:strs){
                //if i >= len(str) or str[i] != strs[0][i], return strs[0], substr(0, i)
                if(i>=str.length() || strs[0][i] != str[i]){
                    return strs[0].substr(0,i);
                }
            }
        }
        //end of loop, return strs[0]
        return strs[0];
    }
};
