class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //create result vector res
        vector<vector<string>> res;
        //create empty hashtable
        unordered_map<string, vector<string>> lookup;
        //loop strs
        for(const auto& str:strs){
            //push a new key value pair [sorted str, unsorted str] to hashtable if the str is not in hashtable
            //otherwise push the unsorted str to the existing hashtable key

            auto sorted_str(str);
            std::sort(sorted_str.begin(), sorted_str.end());
            if(lookup.find(sorted_str) == lookup.end()){
                lookup[sorted_str] = {str};
                continue;
            }
            lookup[sorted_str].push_back(str);
        }

        //move hashtabble values to res
        for(const auto& kv:lookup){
            res.push_back(move(kv.second));
        }
        return res;
    }
};
