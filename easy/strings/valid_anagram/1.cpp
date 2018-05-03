class Solution {
public:
    bool isAnagram(string s, string t) {
        //compate the length
        if(s.size() != t.size()){
            return false;
        }
        //store s into map
        unordered_map<char, int> s_map;
        for(const auto& c:s){
            s_map[c]++;
        }
        //store t into map
        unordered_map<char, int> t_map;
        for(const auto& c:t){
            t_map[c]++;
        }
        //compare the two maps
        for (const auto& x : s_map){
            if(x.second != t_map[x.first]){
                return false;
            }
        }
        return true;
    }
};
