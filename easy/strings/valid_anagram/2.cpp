// Time:  O(n)
// Space: O(1)
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
            s_map[c]--;
            if(s_map[c]<0){
                return false;
            }
        }

        return true;
    }
};


// Time:  O(nlogn)
// Space: O(n)

class Solution {
public:
    bool isAnagram(string s, string t) {
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        return s == t;
    }
};
