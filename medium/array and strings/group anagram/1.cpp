class Solution {
public:
     bool isAnagram(string s, string t) {
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        return s == t;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //create empty result vector res
        vector<vector<string>> res;
        //loop strs, for each str
        for(const auto & str:strs){
            //if str is an anagram with existing str in result vector, add it , and continue
            bool has_exising_anagram = false;
            for(auto& vec : res){
                auto existing_str = vec[0];
                if(isAnagram(existing_str, str)){
                    has_exising_anagram = true;
                    vec.emplace_back(str);
                    break;
                }
            }
            //otherwise push str to res
            if(!has_exising_anagram){
                res.push_back({str});
            }
        }
        return res;
    }
};
