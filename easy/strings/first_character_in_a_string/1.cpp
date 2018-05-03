class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> lookup;
        for(const auto& c : s){
            lookup[c]++;
        }

        for(unsigned int i=0; i< s.size(); i++){
            if(lookup[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};
