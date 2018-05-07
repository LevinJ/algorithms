class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string res;
        if(strs.size() ==0){
            return res;
        }
        for(int i=0; i< strs[0].length(); i++){
            auto c = strs[0][i];
            bool bmatch = true;
            //check if all ith character in the strings are of the same
            for(int j=0; j< strs.size(); j++){
                if(strs[j][i] != c){
                    bmatch = false;
                    break;
                }
            }
            //if they are of the same, push it to res
            if(bmatch){
                res.push_back(c);
            }else{
                //if not, break
                break;
            }


        }
        return res;
    }
};
